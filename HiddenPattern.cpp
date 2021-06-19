#include<bits/stdc++.h>
using namespace std;

int solve(const string A, const string B) {
    int lps[B.length()] ;
    lps[0] = 0;
    for(int i = 1 ; i < B.length() ; i++){
        int x = lps[i-1];
        while(B[x] != B[i]){
            if(x==0){
                x = -1;
                break;
            }
            x = lps[x-1];
        }
        lps[i] = x+1;
    }
    
   int count = 0 ;
    int prev = 0 ; 
    for(int i = 0 ; i < A.length() ; i++){
        int x = prev ;
        while(A[i] != B[x] ){
            if(x == 0){
                x = -1 ;
                break;
            }
            x = lps[x - 1];
        }
        x++;
        if(x == B.length())
            count++;
        prev = x ;
    }
    return count ;
    
}
