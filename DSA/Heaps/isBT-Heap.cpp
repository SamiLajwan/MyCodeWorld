#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }

};
class solution {
    public:
    bool checkCompleteNess(Node* root){
        queue<Node*>q;
        q.push(root);

        bool nullFound = false;

        while(!q.empty()){
            Node* front = q.front();
            q.pop();

            if(front == NULL){
                nullFound = true;
            }
            else{
                if(nullFound)
                    return false;
                else{
                    q.push(front->left);
                    q.push(front->right);
                }
            }   
        }
        return true;
    }

    bool checkMaxProperty(Node* &root){
        if(root == NULL){
            return true;
        }
        if(root -> left == NULL && root -> right == NULL){
            return true;
        }

        bool leftAns = checkMaxProperty(root->left);
        bool rightAns = checkMaxProperty(root->right);

        bool option1 = true;
        if(root->left && root->val < root->left->val){
            return false;
        }
        bool option2 = true;
        if(root->right && root->val < root->right->val){
            return false;
        }
        bool currAns = option1 && option2;

        if(currAns && leftAns && rightAns){
            return true;
        }
        else{
            return false;
        }
    }

    bool isHeap(struct Node* tree){
        bool completeness = checkCompleteNess(tree);
        bool maxProperty = checkMaxProperty(tree);
        if(completeness && maxProperty){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    solution sol;
    Node* root = new Node(10);
    root->left = new Node(9);
    root->right = new Node(8);
    root->left->left = new Node(7);
    root->left->right = new Node(6);
    root->right->left = new Node(5);

    if(sol.isHeap(root)){
        cout << "The binary tree is a heap." << endl;
    } else {
        cout << "The binary tree is not a heap." << endl;
    }
    return 0;
}