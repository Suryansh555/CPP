#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int size = A.size();
    sort(A.begin(),A.end());
    for(int i = 0 ; i < size - 1 ; i++){
        if(A[i] + 1 != A[i+1]){
            return 0 ;
        }
    }
    return 1;
}
