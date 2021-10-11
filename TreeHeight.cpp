
#include<bits/stdc++.h>
using namespace std ;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
int Height(TreeNode * root){
    if(root == NULL){
        return 0 ;
    }
    return max(Height(root -> left),Height(root->right)) + 1;
} 
int solve(TreeNode* A) {
    return Height(A);
}
