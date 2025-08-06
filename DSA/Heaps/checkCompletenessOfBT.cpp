#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x){
        this->val = x;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution{
    public:
    bool solve(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        bool nullFound = false;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front==NULL){
                nullFound = true;
            }
            else{
                //front is a valid node
                if(nullFound){
                    //not a cbt
                    return false;
                }
                else{
                    //may be a cbt
                    q.push(front->left);
                    q.push(front->right);
                }
            }
        }
        return true;
    }

    bool isCompleteBinaryTree(TreeNode* root){
        bool ans = solve(root);
        return ans;
    }

};

int main()
{
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = NULL; // This makes it a complete binary tree
    if(s.isCompleteBinaryTree(root)){
        cout << endl;
        cout << "The Binary Tree is Complete." << endl;
        cout << endl;
    }
    else{
        cout << "The Binary Tree is not Complete." << endl;
    }
    return 0;
}