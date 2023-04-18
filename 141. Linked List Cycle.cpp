/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //ye wala floyd detection cycle se kiya hai 2 pointers leke 
class Solution {
public:
    bool hasCycle(ListNode *head) {

        if (head==NULL || head->next==NULL){
            return false;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL)
            fast=fast->next;

            slow=slow->next;

            if(slow==fast){
                return true;
            }

        }
        return false;

        
    }
};