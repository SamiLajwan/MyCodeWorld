//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends
/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    void print(Node* head) {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
    void insertAtTail(Node* &toMove, Node* &head, Node* &tail) {
       //LL is empty
       if(head == NULL && tail == NULL) {
           head = toMove;
           tail = toMove;
       }
       else {
           tail->next = toMove;
           tail = toMove;
       }
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* zeroHead = NULL;
        Node* zeroTail = NULL;
        
        Node* oneHead = NULL;
        Node* oneTail = NULL;
        
        Node* twoHead = NULL;
        Node* twoTail = NULL;
        
        // LL pr traverse larenge and ye 3 LL ready krenge separate
        Node* temp = head;
        while(temp != NULL) {
            
            //create toMove node and isolate it
            Node* toMove = temp;
            temp = temp -> next;
            toMove->next = NULL;
            
            if(toMove->data == 0) {
                insertAtTail(toMove, zeroHead, zeroTail);
            }
            else if(toMove->data == 1) {
                insertAtTail(toMove, oneHead, oneTail);
            }
            else if(toMove->data == 2) {
                insertAtTail(toMove, twoHead, twoTail);
            }
            
        }

        //yaha jab pohoche, toh teeno LL ready h 
        //merge them 
        //empty wali possibility bhulna mat
        if(zeroHead != NULL) {
            //zero list is non-empty
            if(oneHead != NULL) {
                //one list is non-empty
                zeroTail->next = oneHead;
                //merge with 2 wali list
                oneTail->next = twoHead;
            }
            else {
                //one list is empty
                zeroTail->next = twoHead;
            }
            return zeroHead;
        }
        else {
            //zero List is empty
            if(oneHead != NULL) {
                oneTail->next = twoHead;
                return oneHead;
            }
            else {
                return twoHead;
            }
        }
  
    }
};



//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends