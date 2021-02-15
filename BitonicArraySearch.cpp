#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, int B) {
    int size = A.size();
    int left = 0 ; 
    int right = size - 1 ;
    int mid = -1 ;
    int found = -1 ;
    while(left <=  right ){
        mid  = left + (right-left)/2;
        if(A[mid] == B){
            found = mid ;
            return mid ; 
        }
        if(A[mid] > A[mid-1]){
            // Landed on left part 
            if(B < A[mid])
                right = mid - 1 ;
            else
                left = mid + 1 ;
        }
        else{
            // Landed on right part 
            if(B < A[mid]){
                left = mid + 1 ;
            }
            else{
                right = mid - 1 ;
            }
        }
    }
    return found ; 
}
