#include<bits/stdc++.h>
using namespace std;
int checker(string A , string B , int m , int n){
    if(m > n){
        return 0 ;
    }
    if(m == 0)
        return 1;
    if(n == 0)
        return 0;
    if(A[m-1] == B[n-1])
        return checker(A, B , m-1 ,n-1);
    else
        return checker(A, B , m , n-1 );    
        
    
}
int Solution (string A, string B) {
    int m = A.size();
    int n = B.size();
    int ans = checker(A,B,m,n);
    return ans;
}
