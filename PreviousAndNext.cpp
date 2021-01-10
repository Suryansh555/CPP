#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    int size = A.size();
    vector<int> res;
    
    if(size >= 2){
        res.push_back(A[0] * A[1]);
        for(int i = 1 ; i < size - 1 ; i++){
            
                res.push_back(A[i-1] * A[i+1]);
            
           
        }
        res.push_back(A[size-2] * A[size - 1]);
    }
    else{
        res.push_back(A[0]);
    }
    return res;
}
