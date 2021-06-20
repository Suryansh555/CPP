#include<bits/stdc++.h>
using namespace std ;

int solve(int A, int B, vector<int> &C) {
    stack<int> s ;
    s.push(B);
    for(int i = 0 ; i < A ; i++){
        if(C[i] != 0){
            s.push(C[i]);
        }
        else{
            s.pop();
        }
    }
    return s.top();
    
}
