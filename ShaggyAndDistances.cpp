#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int minlength = A.size() ;
    int length = -1  ;
    unordered_map<int,int> st;
    for(int i = 0 ; i < A.size() ; i++){
        if(st.find(A[i]) != st.end()){
            length = i - st[A[i]];
            if(length < minlength){
                minlength = length;
            }
        }
        else{
            st[A[i]] = i ;
        }
    }
    if(minlength == A.size()){
        return -1 ;
    }
    return minlength; 
}
