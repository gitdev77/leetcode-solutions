class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return root;
        }
        if(root == p ){
            return root; 
        }
        if(root == q){
            return root;
        }
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
         if(left!= NULL && right == NULL){
            return left;
         }
         if(left== NULL && right != NULL){  // if (left == nullptr)return right; or return root;  
            return right;
         }
         if(left==NULL && right == NULL){
            return NULL;
         }

            return root;
         
    }

    
};