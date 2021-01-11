#include<bits/stdc++.h>
using namespace std;
vector<int> solve(int N, vector<vector<int> > &B) {
    int size = B.size();
    vector<int> A ;
    for(int i = 0 ; i < N ;i++ ){
        A.push_back(0);
    }
    for(int i = 0 ; i < size ; i++){
        A[B[i][0] - 1] = A[B[i][0] - 1] + B[i][2];
        A[B[i][1]] = A[B[i][1]] - B[i][2];
    }
    int val = 0;
    for(int i = 0 ; i < N ;i++){
        val = val + A[i];
        A[i] = val ;
    }
    return A;
}
