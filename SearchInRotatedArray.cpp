#include<bits/stdc++.h>
using namespace std;
int Solution (const vector<int> &A, int B) {
    int low = 0 ;
    int high = A.size() - 1 ;
    int found = -1 ;
    while(low <= high){
        int mid = (low + high)/2 ;
        if(B == A[mid]){
            found = mid; 
            break ;
        }
        if(B >= A[0]){
            if(A[mid] < A[0]){
                high = mid - 1; 
            }
            else {
                if(B > A[mid]){
                    low = mid + 1 ;
                }
                else{
                high = mid - 1 ;
                } 
            }
        }
        if(B < A[0]){
            if(A[0] <= A[mid]){
                low = mid + 1 ;
            }
            else{
                if(A[mid] < B){
                    low = mid + 1 ;
                }
                else{
                    high = mid - 1 ;
                }
            }
        }
    }
    return found ; 
}
