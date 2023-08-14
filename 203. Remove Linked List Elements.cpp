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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        ListNode* pappu=head;
        while(pappu!=NULL && pappu->next!=NULL){
            if(pappu->next->val==val){
                pappu->next=pappu->next->next;//ye tab tak execute hoga jab tak == val
            }
            else//jab same val milna band hoga then increment the pointer
                //used when continiusly "val" value present hai like [1,2,3,4,5,6,6,6,7]
            pappu=pappu->next;
            
        }
        return head;
    }
};