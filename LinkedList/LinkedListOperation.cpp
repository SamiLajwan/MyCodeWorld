#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    //Constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

//Insertion at head
Node* insertAtHead(int value, Node* &head, Node* &tail){
    //LL is empty->head & tail both null point karre honge
    //it means we are creating first node of LL
    if(head == NULL && tail == NULL ){
        //step1: create a new Node
        Node* newNode = new Node(value);
        //head ko node pr lagao
        head = newNode;
        //tail ko node pr lagao
        tail = newNode;
    }
    else{
        //LL is not empty-> pehle se node present hai
        //insert at head
        //step1: create a node
        Node* newNode = new Node(value);
        //step2: connect this new node to head node
        newNode->next = head;
        //step3: head update kro
        head = newNode;
    }
    return head;
}

//Insert at tail of the updated list
Node* insertAtTail(int value, Node* &head, Node* &tail){
    if(head == NULL && tail == NULL ){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

    else{
        //LL is nt empty
        //step1: create a node
        Node* newNode = new Node(value);
        //step2: tail node ko newNode se connect kro
        tail->next = newNode;
        //step3: head node ko newnode se connect kro
        tail = newNode;
    }
    return head;
}

//Print Function
void print(Node* head){
    Node* temp = head;
    //jab tak mera temp null ke equal nhi hota, tab tak node print karte raho
    while(temp!=NULL){
        cout<<"["<< temp->data << "][ ]"<<"-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    //assume -> valid position
    int length = getLength(head);

    if(position == 1){
        //insert at head krna chahta hu
        insertAtHead(value, head, tail);
    }
    else if(position == length + 1){
        //insert at tail karna chahta hu
        insertAtTail(value, head, tail);
    }
    else{
        //insert in between kahin krna chahta hu
        Node* temp = head;
        for(int i=0; i<position-2; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp -> next;
        temp->next = newNode; 
    }
}


//Search in a Linked List
bool searchinLL(int target, Node* head){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == target){
            return true;
        }
        temp= temp->next;
    }
    return false;
}

void deleteNodeFromLL(int position, Node* &head, Node* &tail){
    //if LL is empty , cant delete
    if(head == NULL && tail == NULL){
        cout << "No node to delete." << endl;
        return; 
    }
    //single node in LL
    if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }

    else{
        //Multiple nodes inside a LL
        //2 Case
        //First Case: posi 1 , delete krna hai
        if(position == 1){
            Node* temp =  head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            //any other node except the first one
            Node* prev = head;
            for(int i=0; i<position-2; i++){
                prev = prev->next;
            }
            Node* curr = prev->next;
            Node* forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(10, head, tail);
    // print(head);
    insertAtHead(20, head, tail);
    // print(head);
    insertAtHead(30, head, tail);
    // print(head);

    // insertAtTail(101, head, tail);
    // print(head);
    // insertAtTail(102, head, tail);
    // print(head);
    // insertAtTail(103, head, tail);
    print(head);

    insertAtPosition(1, 42, head, tail);
    print(head);

    insertAtPosition(3, 142, head, tail);
    print(head);

    insertAtPosition(2, 420, head, tail);
    print(head);

    cout<< searchinLL(142, head); // search.

    deleteNodeFromLL(1, head, tail);
    print(head);
    deleteNodeFromLL(3, head, tail);
    print(head);
    deleteNodeFromLL(4, head, tail);
    print(head);
    return 0;
}