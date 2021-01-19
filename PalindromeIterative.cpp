#include<bits/stdc++.h>
using namespace std;

int Solution(string A) {
    int size = A.size();
    int left = 0 ;
    int right  = size - 1 ;
    while(left<=right){
        if(A[left] == A[right]){
            left++;
            right--;
        }
        else{
            return 0;
        }
    }
    return 1 ;
}
