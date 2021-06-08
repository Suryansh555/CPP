#include<bits/stdc++.h>
using namespace std ;

int diffPossible(const vector<int> &A, int B) {
    unordered_map<int,int> ans ;
    for(int i = 0 ; i < A.size() ; i++){
        if(ans.find(A[i]) != ans.end()){
            ans[A[i]]++;
        }
        else{
            ans[A[i]] = 1 ;
        }
    }
    for(int i = 0 ; i < A.size() ; i++){
        if(ans.find(A[i] + B) != ans.end()){
            if(A[i] + B == A[i]){
                if(ans[A[i]+B] > 1){
                    return 1 ;
                }
            }
            else{
                return 1 ;
            }
        }        
    }
    return 0 ;
}
