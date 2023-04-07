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

    ListNode* reverseKGroup(ListNode* head, int k) {
    /*//size of linked list pata karo
    int c = 0; 
    ListNode* current = head; 
    while (current != NULL) {
        c++;
        current = current->next;
    }*/
    
    
        //base case
        if(head==NULL ){
            return NULL;
        }
        //pehle k nodes ke liye reversal code
        ListNode *prev=NULL;
        ListNode *forward=NULL;
        ListNode *curr=head;
        int count=0;
        //basically check karre hain ki can we go till the last element , like [remaining elements>k] in the linked list 
        int x = k;
        ListNode* p = head;
        while(p!=NULL && x>0){
            p = p->next;
            x--;
        }
        if(x==0){
        while(curr!=NULL && count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }

        //recursion baki ka karr dega
       if(forward!=NULL){
        head->next=reverseKGroup(forward,k);
        }
        

        //return
        return prev;}

        //warna else aaya toh iska matalab ki k>remaining elements toh woh bacche hue elements ko reverse nahi karna hai
        //without reversing print karna hai 
        /*example test cae
        Input: head = [1,2,3,4,5], k = 3
        Output: [3,2,1,4,5]*/
        else
        return head;

        
    }
};