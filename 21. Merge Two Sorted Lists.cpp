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
    ListNode* solve(ListNode* list1, ListNode* list2){

        //if only one element in the first list
        if(list1->next==NULL){
            list1->next=list2;
            return list1;
        }
        ListNode* curr=list1;
        ListNode* curr_next=curr->next;
        ListNode* check=list2;
        ListNode*check_next=check->next;

        while(curr_next!=NULL && check!=NULL){
            if(curr->val <= check->val && check->val<curr_next->val){
                curr->next=check;
                check_next=check->next;
                check->next=curr_next;
                curr=check;
                check=check_next;
            }
            else{
                curr=curr_next;
                curr_next=curr_next->next;

                if(curr_next==NULL){
                    curr->next=check;
                }
            }
        }
        return list1;

    }



    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
        return list2;
        if(list2==NULL)
        return list1;
        if(list1->val <= list2->val)
        return solve(list1,list2);
        else
        return solve(list2,list1);
    }
};