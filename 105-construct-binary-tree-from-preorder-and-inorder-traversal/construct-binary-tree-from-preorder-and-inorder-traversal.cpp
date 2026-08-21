class Solution {
public:

TreeNode* solve(vector<int> preorder, vector<int> inorder, int st, int end, int& idx){
 
   if(st > end){ 
    return NULL;
}
int valroot = preorder[idx];
 idx++;
int i = st;
for( i = st; i < end; i ++){
     if(inorder[i]==valroot){
      
        break;
    
     }

}
   TreeNode* root = new TreeNode(valroot);
   root->left = solve(preorder,inorder, st, i-1, idx);
  root->right =  solve(preorder, inorder, i+1, end, idx);
    return root;

}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& 
    inorder) {
        int n = preorder.size();
        int idx =0;
      return  solve(preorder, inorder,0, n-1, idx);
    }
};