/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
    
        ListNode* reverseList(ListNode* &prev, ListNode* &curr){
            //base case
            if(curr == NULL){
                //revrse LL ka strating node pr prev wala pointer hain
                return prev;
            }
    
            ListNode* forward = curr->next;
    
            curr->next = prev;
    
            //pointers ko 1 step aage badhaya
            prev = curr;
            curr = forward;
    
            return reverseList(prev, curr);
        }
    
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* curr = head;
    
            ListNode* newHead = reverseList(prev, curr);
            return newHead;
        }
    };