#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int size = A.size();
    int max = INT_MIN ;
    int min = INT_MAX ;
    for(int i = 0 ; i < size ; i++){
        if(A[i] > max){
            max = A[i];
        }
        if(A[i] < min){
            min = A[i];
        }
    }
    int res = size  ;
    for(int i = 0 ; i < size ; i++){
        if(A[i] == max || A[i] == min){
            res--;
        }
    }
    return res;
}
