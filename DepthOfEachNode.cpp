#include<bits/stdc++.h>
using namespace std ; 

struct TreeNode {
    int val;
    int depth;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), depth(-1), left(NULL), right(NULL) {}
};



void Depth(TreeNode* root , int count){
    if(root == NULL){
        return ;
    }
    root -> depth = count ;
    Depth(root -> left , count + 1);
    Depth(root -> right , count + 1);
    return ; 
}
void solve(TreeNode* A){
    Depth(A,1);


}
