#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int A){
    int start = 1 ; 
    int end  = A/2;
    if(A < 1){
        return A;
    }
    int ans = 1 ;
    while(start <= end){
        long long int mid = (start+end)/2;
        if (mid * mid <= A){
            ans = mid; 
            start = mid + 1 ;
        }
        if(mid * mid > A){
            end = mid - 1 ;
        }
    }
    return ans;
}

int sqrt(int A) {
    return BinarySearch(A);
}
