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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //step1-pehle count the total number of nodes present
        ListNode* co=head;
        int count=0;
        while(co!=NULL){
            count++;
            co=co->next;
        }
        if(count-n==0){
            head=head->next;
            return head;
        }
        ListNode* p = head;
        if(n==1)
        {
             while(p->next->next!=NULL)
             {
                 p=p->next;
             }
             p->next=NULL;
             return head;
        }
        
        //step2-take and new ptr and make it reach till the deletion node which is count-n;
        int req=count-n-1;
        ListNode* curr=head;
        for(int i=0;i<req;i++){
            curr=curr->next;
        }

        
        if(curr->next!=NULL)
        {
        ListNode* temp=curr->next;
        if (temp->next!=NULL)
        curr->next=temp->next;
        }
        
        

        return head;

        
    }
};