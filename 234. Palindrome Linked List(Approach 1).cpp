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
 //Approach 1 : copy elements of linked flist in an array
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* tail=head;
        vector<int> arr;
        while(tail!=NULL){
            arr.push_back(tail->val);
            tail=tail->next;
        }
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s]==arr[e]){
                s++;
                e--;
            }
            else{
                return false;
            }
        }
        return true;

        
        
    }
};