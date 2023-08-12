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
private:
    ListNode * rotate(ListNode * start){
        ListNode * prev = start;
        ListNode * curr = start->next;
        while(curr->next!=NULL){
            prev = prev->next;
            curr = curr->next;
        }
        curr->next = start;
        prev->next = NULL;
        return curr;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode * curr = head;
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        int count=0;
        ListNode* x=head;
        while(x!=NULL){
            x=x->next;
            count++;
        }
        k=k%count;//because size ke barabar rotation karne pe same ho jata hai list
                  //issliye bass take effective rotations
        while(k>0){
            curr = rotate(curr);//ham hamesha starting noded bhej rahe hai
            k--;
        }
        return curr;  
    }
};