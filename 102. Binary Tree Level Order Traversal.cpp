/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==NULL) return ans;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int> level; //this vector stores all node values that exist in a single level 
            //this for loop takes out each node value from the q in a level and 
            //->left ->right wale ko q mei push karr deta hai
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();

                if(curr->left !=NULL)
                    q.push(curr->left);
                if(curr->right !=NULL)
                    q.push(curr->right);

                level.push_back(curr->val);//after a level is completed we push it to final answer      
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};