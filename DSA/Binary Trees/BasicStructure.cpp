#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }

};

Node* createTree(){
    cout << "Enter the value for Node" << endl;
    int value;
    cin >> value;

    if(value == -1){
        return NULL;
    }
    else{

        Node* root = new Node(value);
        //1 case maine karliya, baaaki left and right recursion dekh
        cout << "adding left child for " << value << endl;
        root->left = createTree();
        cout << "adding right child for " << value << endl;
        root->right = createTree();
        return root;
    }

}

int main(){
    Node* root;
    root = createTree();
    return 0;
}