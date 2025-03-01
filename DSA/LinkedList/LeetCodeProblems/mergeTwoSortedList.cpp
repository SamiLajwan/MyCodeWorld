#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if(left == 0) return right;
        if(right == 0) return left;

        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;

        while(left && right)
        {
            if(left->val <= right->val)
            {
                mptr->next = left;
                mptr = left;
                left = left->next;
            }
            else{
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }
        if(left){
            mptr->next = left;
        }
        if(right){
            mptr->next = right;
        }
        return ans->next;
    }
};

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << "->";
        head = head->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    Solution solution;

    // Create two sorted linked lists
    int arr1[] = {1, 2, 4};
    int arr2[] = {1, 3, 4};
    ListNode* left = createList(arr1, 3);
    ListNode* right = createList(arr2, 3);

    // Merge the two sorted linked lists
    ListNode* mergedList = solution.mergeTwoLists(left, right);

    // Print the merged linked list
    printList(mergedList);

    return 0;
}