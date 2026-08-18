class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root==NULL){
            return 0;
        }
       if(root->left != NULL && root->left->left == NULL  && root->left->right == NULL ){
         sum = sum + root->left->val;
       } else{
      sum = sum + sumOfLeftLeaves(root->left);// recursively search inside left subtree!!
       }
        sum = sum + sumOfLeftLeaves(root->right);
        return sum;
    }
};