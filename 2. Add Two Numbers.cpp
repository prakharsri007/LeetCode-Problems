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
    void insert(struct ListNode* &head,struct ListNode* &tail,int value){
        ListNode* temp=new ListNode(value);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        ListNode* ans=new ListNode(0);
        anshead=ans;
        anstail=ans;
        int carry=0;
        int sum=0;
        int digit=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            sum=0;
            digit=0;
            int v1=0;
            if(l1!=NULL){
                v1=l1->val;
            }
            int v2=0;
            if(l2!=NULL){
                v2=l2->val;
            }
            sum=carry+ v1+v2;
            digit = sum%10;
            //add the answer in anew node and attach in the ans linked list
            insert(anshead ,anstail ,digit);
            carry=sum/10;
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
        }
        
        return anshead->next;
        
    }
};