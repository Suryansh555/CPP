#include<bits/stdc++.h>
using namespace std ;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

int MaxValue(TreeNode* root){
    if(root == NULL){
        return INT_MIN ;
    }
    int value = max(MaxValue(root -> left) , MaxValue(root -> right));
    return max(value , root -> val);
    
} 
 
int solve(TreeNode* A) {
    return MaxValue(A);
}
