class Solution {
public:
int maxi = INT_MIN;
      int solve(TreeNode* root){
        
        if(root == 0 ){
            return 0;
        }
        int left = solve(root->left);
        int right = solve (root->right);
        left = max(0,left);
        right = max(0,right);
        maxi = max(maxi, (left + right) + (root->val));
       return (root->val) + max(left,right);
    }

    int maxPathSum(TreeNode* root) {
     solve(root);
     return maxi;
    
    }
};