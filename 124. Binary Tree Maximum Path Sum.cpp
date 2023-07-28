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
    int maxsum(TreeNode* root,int& maxi){
        if(root==NULL) return 0;

        //DONT NOR CONSIDER -VE VALUE PATH
        int lhsum=max(0,maxsum(root->left,maxi));
        int rhsum=max(0,maxsum(root->right,maxi));

        //checking the maximum path sum for each node 
        maxi=max(maxi,((root->val)+lhsum+rhsum));

        //we make it like the maximum height the return statement so that each node is traversed and the
        //bending curve for each node is calculated and maximum path sum is found
        return (root->val) + max(lhsum,rhsum);// for returning value of each lh & rh 
    }      
public:
    int maxPathSum(TreeNode* root) {
        // int min is needed because when tree is [-2] or something it will give 0 instead of -2
        int maxi=INT_MIN;
        maxsum(root,maxi);
        return maxi;
        
    }
};