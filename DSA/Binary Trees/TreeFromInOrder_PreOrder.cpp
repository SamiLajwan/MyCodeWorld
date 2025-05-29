class Solution {
public:
    void CreateMapping(unordered_map<int,int> &valuetoIndex, vector<int> inorder){
        for(int i = 0; i < inorder.size(); i++){
            valuetoIndex[inorder[i]] = i;
        }
    }

    TreeNode* ConstructTree(unordered_map<int,int>& Map, vector<int> &preorder, vector<int>& inorder,
                            int &preOrderIndex, int inorderStart, int inorderEnd, int size){
        // base case
        if(preOrderIndex >= size || inorderStart > inorderEnd){
            return NULL;
        }

        // process root
        int element = preorder[preOrderIndex++];
        TreeNode* root = new TreeNode(element);

        // find root in inorder to split
        int elementIndex = Map[element];

        // recursively build left and right
        root->left = ConstructTree(Map, preorder, inorder, preOrderIndex, inorderStart, elementIndex - 1, size);
        root->right = ConstructTree(Map, preorder, inorder, preOrderIndex, elementIndex + 1, inorderEnd, size);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        int inorderStart = 0;
        int inorderEnd = inorder.size() - 1;
        int size = inorder.size();
        unordered_map<int,int> Map;

        CreateMapping(Map, inorder);

        return ConstructTree(Map, preorder, inorder, preIndex, inorderStart, inorderEnd, size);
    }
};
