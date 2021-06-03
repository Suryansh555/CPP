#include<bits/stdc++.h>
using namespace std; 

int digitsum(int a){
    int sum = 0 ;
    while(a > 0){
        sum = sum + a % 10 ; 
        a = a / 10 ;
    }
    return sum ; 
}

int solve(int A, int B) {
    int start = 1 ;
    int end = A ;
    int ans = -1 ;
    while(start <=  end){
        int mid = (start + end)/2; 
        if((mid - digitsum(mid)) >= B ){
            ans = mid ;
            end = mid - 1 ;
        }
        else{
            start = mid + 1 ;
        }
    }
    if(ans == -1){
        return 0 ;
    }
    return A - ans + 1  ;
}
