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
//proper code and explanation in copy
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        return NULL;
        ListNode* new_node=new ListNode();
        new_node->next=head;
        ListNode* newhead=new_node;

        ListNode* curr=head;
        ListNode* p=new_node;
        while(curr!=NULL){
            if(curr->next!=NULL && curr->val==curr->next->val){
                while(curr->next!=NULL && curr->val==curr->next->val){
                    curr=curr->next;
                }
                p->next=curr->next;    
            }
            else {
                p=p->next;
            }
            curr=curr->next;
        }
        return newhead->next ;
        
    }
};