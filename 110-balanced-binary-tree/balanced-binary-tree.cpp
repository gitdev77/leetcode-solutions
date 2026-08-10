class Solution {
public:
int solve(TreeNode* node){
  if(node==NULL){
            return 0;
  }
            int left = solve(node->left);
            int right = solve(node->right);
            if (left == -1 || right == -1 ){
                return -1;
            }
            if(abs(left - right) <= 1){
                return 1 + max(left,right);
            }
            else if (abs(left - right) >1){
                return -1;
            }
            else{
                return -1;
            }

}
    bool isBalanced(TreeNode* root) {
     
   if(solve(root)!= -1){
    return true;
    }
   else{ return false;
   }
}
    
};