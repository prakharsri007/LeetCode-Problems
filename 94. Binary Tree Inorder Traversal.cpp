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
private:
    void inorder(vector<int>& inorderans,TreeNode* root){
        if(root==NULL)
        return;
        inorder(inorderans,root->left);
        inorderans.push_back(root->val);
        inorder(inorderans,root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //right root left   - inorder
        vector<int> inorderans;
        inorder(inorderans,root);
        return inorderans;
        
    }
};