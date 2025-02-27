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
    
        int getLength(ListNode* head){
            int len=0;
            ListNode* temp = head;
            while(temp != NULL){
                len++;
                temp= temp->next;
            }
            return len; 
        }
    
        ListNode* reverseKGroup(ListNode* head, int k) {
            //if LL is empty
            if(head == NULL){
                return head;
            }
    
            // single node in a LL
            if(head->next == NULL){
                return head;
            }
    
            //more than 1 node
            int len = getLength(head);
            if(len < k ){
                return head;
            }
    
            // 1 case ham karemge, baaki recurison karega
            // case 1: k length ko reverse karna hai
    
            ListNode* prev = NULL;
            ListNode* curr = head;
            int position = 0;
    
            while(position < k && curr != NULL){
                ListNode* forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
                position++;
            }
    
            //baaki recursion sambhal legaf
            if(curr != NULL){
                ListNode* recrsionkaHead = reverseKGroup(curr, k);
                head->next = recrsionkaHead;
            }
            
            return prev;
    
        }
    };