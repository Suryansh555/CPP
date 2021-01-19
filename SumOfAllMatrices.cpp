#include<bits/stdc++.h>
using namespace std;
int Solution (vector<vector<int> > &A) {
    int R = A.size();
    int result = 0;
    for(int r = 0 ;r < R ; r++){
        for(int c = 0 ; c < R ; c++){
            result = result + (r+1)*(c+1)*(R-r)*(R-c)*A[r][c];
        }
    }
    return result;
}
