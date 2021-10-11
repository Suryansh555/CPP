
#include<bits/stdc++.h>
using namespace std ; 

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
 
void Inorder(TreeNode * root , vector<int> &ans){
    if(root == NULL){
        return ;
    }
    Inorder(root -> left,ans);
    ans.push_back(root -> val);
    Inorder(root -> right,ans);
} 
vector<int> InorderTraversal(TreeNode* A) {
    vector<int> ans ;
    Inorder(A,ans) ;
    return ans ; 
    
}
