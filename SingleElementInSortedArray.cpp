#include<bits/stdc++.h>
using namespace std; 
int Solution(vector<int> &A){
    int low = 0 ;
    int high = A.size() - 1 ;
    if(high == 0){
        return A[0];
    }
    while(low <=  high){
        int mid = (low + high)/2;
        if(A[mid] != A[mid-1] && A[mid] != A[mid+1]){
            return A[mid];
        }
        if(A[mid] == A[mid - 1]){
            mid =  mid - 1 ;
        }
        if(mid % 2 == 0){
            low = mid + 2 ;
        }
        else{
            high = mid - 1 ;
        }
    }
}
