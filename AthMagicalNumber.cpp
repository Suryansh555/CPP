#include<bits/stdc++.h>
using namespace std;

long long int min1(long long int B ,long long int C){
    if(B >= C){
        return C ;
    }
    else{
        return B;
    }
}

int solve(int A1, int B1, int C1) {
    
    if(B1 == 0){
        return C1 * A1 ; 
    }
    if(C1 == 0){
        return B1 * A1 ;
    }
    long long int A = A1 ;
    long long int B = B1 ;
    long long int C = C1 ;
    long long int  ans = 0 ;
    long long int min = min1(B,C) ;
    long long int start = min;
    long long int end = A * min  ;
    long long int  gcd = __gcd(B,C);
    
    while(start <= end){
        long long int mid = (start + end)/2;
        long long int count = (mid/B + mid/C) - (mid * gcd)/(B*C) ;
        if(count < A){
            start = mid + 1 ;
        }
        else{
            ans = mid % 1000000007; ; 
            end = mid - 1 ;
        }
    }
    return ans  ;
}
