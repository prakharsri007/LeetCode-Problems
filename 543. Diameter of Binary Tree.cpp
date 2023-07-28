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
    //this function is being utilised to make option3
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);

        int height=max(left,right)+1;
        return height;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        //base case
        if(root==NULL){
            return 0;
        }
        //option 1&2 when answer is either only in left subtree or only in right sub tree
        int option1=diameterOfBinaryTree(root->left);
        int option2=diameterOfBinaryTree(root->right);
        //third option when answer is formed by combinig both left and right subtress
        //we have to calculate separate depths of left and right subtree
        //so we use the function from maximum depth question **104 wala in leetcode
        int option3=maxDepth(root->right) + maxDepth(root->left);

        //final answer is the max of all these 3 options
        int ans=max(option1,max(option2,option3));
        return ans;
    }
};

//OPTIMAL SOLUTION O(n)

class Solution {
private:
    int height(TreeNode* root,int& diameter){
        if(root==NULL) return 0;

        int lh=height(root->left,diameter);
        int rh=height(root->right,diameter);
        //check max sum of lh+rh for each node
        diameter=max(diameter,(lh+rh));
        //normal return for max height
        return 1+max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};