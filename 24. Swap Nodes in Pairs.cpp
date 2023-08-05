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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
        return head;
        if(head->next==NULL)
        return head;

        ListNode* i=head;
        ListNode* j=head->next;
        while(1){
            int temp=i->val;
            i->val=j->val;
            j->val=temp;
            if(j->next==NULL || j->next->next==NULL) break;
        
            i=i->next->next;
            j=j->next->next;
        }
        return head;
        
        
    }
};