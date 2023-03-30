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
 /*APPROACH 2 : OPTIMIZED SOLUTION*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL) //if zero or 1 node
        return head;
        if(head->next->next==NULL){   // if two nodes then return the right one
            return head->next;
        }
        ListNode* pro=head->next;
        ListNode* noob=head;
        while(pro!=NULL){
            pro=pro->next;
            if(pro!=NULL){   // check before jumping againas it might have already gotten null
                pro=pro->next;
            }
            noob=noob->next;
            
            
        }
        return noob;
        
    }
};