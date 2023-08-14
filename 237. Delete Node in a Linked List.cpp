/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//basically aage wale node ki value ko peeche copy karo and aage wala delete karr do
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* pappu=node->next;
        int temp=pappu->val;
        node->val=temp;
        if(node->next!=NULL){
            node->next=node->next->next;
        }

        
    }
};