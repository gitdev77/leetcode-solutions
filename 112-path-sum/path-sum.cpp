class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        if(root->left ==NULL && root-> right == NULL){
            int need = targetSum - root->val;
            if(need == 0){
                return true;
            }
            else{
                return false;
            }
        }
            int resum = targetSum - root->val;
            bool leftans = hasPathSum(root->left, resum);
            bool rightans = hasPathSum(root->right, resum);
        
       return leftans || rightans;
        
    }
};