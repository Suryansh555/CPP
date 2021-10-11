
#include<bits/stdc++.h>
using namespace std ; 

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
 
void Postorder(TreeNode * root , vector<int> &ans){
    if(root == NULL){
        return ;
    }
    Postorder(root -> left,ans);
    Postorder(root -> right,ans);
    ans.push_back(root -> val);
} 
vector<int> PostTraversal(TreeNode* A) {
    vector<int> ans ;
    Postorder(A,ans) ;
    return ans ; 
    
}
