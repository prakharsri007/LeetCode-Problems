class Solution {
public:
    //fucntion to check the maximum depth from each left&right side of node 
    //this fucntion is used to check the difffernce between left&right subtree depth of each node
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        int ans=max(left,right)+1;
        return ans; 
    }

    bool isBalanced(TreeNode* root) {
        //base case
        if(root==NULL){
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);

        //difference condition to check the height balance in left & right subtree of EACH NODE
        //uses maximum depth function from previous question **104 leetcode
        bool diff=abs(maxDepth(root->left)-maxDepth(root->right)) <=1;
        //all 3 conditions need to be satisfied for each node in order to be a balanced tree
        if(left && right && diff){
            return true;
        }
        else{
            return false;
        }
        
    }
};

//OPTIMISED O(n)

class Solution {
private:
    int height(TreeNode* root){
        if(root==NULL) return 0;

        int lh=height(root->left);
        if(lh==-1) return -1;

        int rh=height(root->right);
        if(rh==-1) return -1;

        if(abs(lh-rh)>1) return -1;

        return 1+ max(lh,rh);
    }    
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};