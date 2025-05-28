#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode* root) {
    //base case
    if(root == NULL) {
        return 0;
    }
    int leftSubtreeHeight = maxDepth(root->left);
    int rightSubtreeHeight = maxDepth(root->right);
    int maxHeight = max(leftSubtreeHeight, rightSubtreeHeight);
    int totalHeight = maxHeight + 1;
    return totalHeight;
}

int main(){
    // Example usage:
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Maximum depth of the tree: " << maxDepth(root) << endl;

    // Clean up memory (not shown here)
    return 0;
}