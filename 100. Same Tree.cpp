
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //base cases
        if(p==NULL && q==NULL){
            return true;
        }
        if(p!=NULL && q==NULL){
            return false;
        }
        if(p==NULL && q!=NULL){
            return false;
        }
        //checking if the left and the right subtrees are identical
        bool left=isSameTree(p->left,q->left);
        bool right=isSameTree(p->right,q->right);
        //checking if the node value is same or not
        bool valuecheck= p->val == q->val;

        if(left && right && valuecheck){
            return true;
        }
        else{
            return false;
        }
        
    }
};