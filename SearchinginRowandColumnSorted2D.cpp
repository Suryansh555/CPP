#include<bits/stdc++.h>
using namespace std;
int Solution(vector<vector<int> > &A, int B) {
    int R = A.size();
    int C = A[0].size();
    int max = A[R-1][C-1];
    int min = A[0][0];
    
    if(B < min || B >  max){
        return -1 ;
    }
    int r = 0 ; 
    int c = C-1;
    int rindex = -1;
    int cindex = 1008;
    while(r < R && c >= 0){
        if(A[r][c] == B){
            rindex = r;
            cindex = c;
            break;
        }
        if(A[r][c] > B){
            c--;
        }
        if(A[r][c] < B){
            r++;
        }
    }
    return  ((rindex+1) * 1009 + (cindex+1));
}
