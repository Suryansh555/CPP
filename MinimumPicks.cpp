#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int size = A.size();
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0 ; i < size ; i++){
        if(abs(A[i]) % 2 == 0){
            if(A[i] > max)
                max = A[i];
        }
        else{
            if(A[i] < min)
                min = A[i];
        }
    }
 
    return max - min ;
}
