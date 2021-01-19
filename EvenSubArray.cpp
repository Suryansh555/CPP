#include<bits/stdc++.h>
using namespace std;
string solve(vector<int> &A) {
    int size = A.size();
    if(size % 2 != 0){
        return "NO";
    }
    if(A[0] % 2 != 0){
        return "NO";
    }
    if(A[size-1] % 2 != 0){
        return "NO";
    }
    int sum[size];
    int val = 0;
    for(int i = 0 ; i < size ; i++){
        val = val + A[i];
        sum[i] = val ;
    }
if(sum[size-1] % 2 == 0){
    return "YES";
}
    
    
}
