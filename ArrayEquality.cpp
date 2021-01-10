#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int size = A.size();
    int max = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        if(A[i] > max){
            max = A[i];
        }
    }
    int cal = 0 ;
    for(int i = 0 ; i < size ; i++){
        cal = cal + max - A[i];
    }
    return cal;
}
