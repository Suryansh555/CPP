#include<bits/stdc++.h>
using namespace std ; 
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
int check(TreeNode* A, TreeNode* B){
    if(A == NULL && B == NULL){
        return 1 ;
    }
    else if(A == NULL && B != NULL){
        return 0 ;
    }
    else if(A != NULL && B == NULL){
        return 0 ;
    }
    int index ;
    if(A -> val  == B -> val ){
        index = 1 ;
    }
    else{
        index = 0 ;
    }
    int val1 = check(A -> left , B -> left);
    int val2 = check(A -> right , B -> right);
    int min1 = min(val1,val2);
    return min(min1,index);
}
int isSameTree(TreeNode* A, TreeNode* B) {
    return check(A,B);
}
