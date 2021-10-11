#include<bits/stdc++.h>
using namespace std ;

int diceSum(int n ,  vector<long long int> &dp){
    
    if(dp[n] != -1){
        return dp[n] % 1000000007 ;
    }
    
    dp[n] = 0 ;
    for(int i = 1 ; (i <= 6) && (n >= i) ; i++){
        dp[n] += diceSum(n-i , dp) % 1000000007 ;
    }
    return dp[n] % 1000000007 ;
}
int solve(int A) {
    vector<long long int> dp (A+1 , -1) ;
    dp[0] = 1 ;
    return (diceSum(A , dp)) % 1000000007 ;
}
