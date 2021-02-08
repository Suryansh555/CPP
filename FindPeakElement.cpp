#include<bits/stdc++.h>
using namespace std;
int Solution(vector<int> &A) {
    int low = 0 ;
    int n = A.size();
    int high = n - 1;
    if(n == 1){
        return A[0];
    }
    if(A[0] >= A[1]) 
        return A[0];
    if(A[n-1] >= A[n-2])
        return A[n-1];
        
    while(low <= high ){
        int mid = (high + low)/2 ;
        
        if(A[mid] > A[mid-1] && A[mid] > A[mid+1]){
            return A[mid];
        }
        if(A[mid] < A[mid+1]){
            low = mid + 1 ; 
        }
        else{
            high = mid - 1 ;
        }
    }
}
