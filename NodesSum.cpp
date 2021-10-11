
#include<bits/stdc++.h>
using namespace std ;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

 
 int Sum(TreeNode * root){
     if(root == NULL){
         return 0 ; 
     } 
     return Sum(root -> left) + Sum(root -> right) + root -> val ;
 }
int solve(TreeNode* A) {
    return Sum(A);
}
