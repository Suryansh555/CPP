
#include<bits/stdc++.h>
using namespace std ; 

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
 
void Preorder(TreeNode * root , vector<int> &ans){
    if(root == NULL){
        return ;
    }
    ans.push_back(root -> val);
    Preorder(root -> left,ans);
    Preorder(root -> right,ans);
} 
vector<int> preorderTraversal(TreeNode* A) {
    vector<int> ans ;
    Preorder(A,ans) ;
    return ans ; 
    
}
