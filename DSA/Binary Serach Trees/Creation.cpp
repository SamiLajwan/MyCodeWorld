#include<iostream>
#include<queue>
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

// O(log n) to insert a node
Node* buildBST(int val, Node* root){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    else{
        if(val < root->data){
            //insert in left subtree
            root ->left = buildBST(val, root->left);
        }
        else{
            //insert in right subtree
            root ->right = buildBST(val, root->right);
        }
    }
    return root;
}

//Pre-Oredr Traversal
void preOrderTraversal(Node* root){
    if(root == NULL) return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

//In-Order Traverdal
void inOrderTraversal(Node* root){
    if(root == NULL) return;

    inOrderTraversal(root->left);
     cout << root->data << " ";
    inOrderTraversal(root->right);
   
}

//Post-Order Traversal
void postOrderTraversal(Node* root){
    if(root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

Node* createTree(){
    cout << "Enter the value of the root node: " << endl;
    int val;
    cin >> val;
    Node* root = NULL;

    while(val != -1){
        root = buildBST(val, root);
        cout << "Enter the value of the node: " << endl;
        cin >> val;
    }
    return root;
}

void levelOrderTraversal(Node* root){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // To mark the end of the current level

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout << endl; // End of current level
            if(!q.empty()) 
                q.push(NULL); // If there are more nodes, add a new level marker
        }
        else{
            cout << front->data << " ";
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
}

int main(){
    Node* root = createTree();
    
    cout << "Pre-Order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "In-Order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Post-Order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    cout << "Level-Order Traversal: " << endl;
    levelOrderTraversal(root);

    return 0;
}
