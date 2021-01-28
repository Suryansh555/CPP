#include<bits/stdc++.h>
using namespace std;
vector<int> Solution(vector<vector<int> > &A, vector<int> &B, vector<int> &C, vector<int> &D, vector<int> &E) {
    int M = A.size();
    int N = A[0].size();
    int prefix[M][N];
    prefix[0][0] = A[0][0] ;
    for (int i = 1; i < N; i++) {
        prefix[0][i] = prefix[0][i - 1] + A[0][i]; 
    }
    for (int i = 0; i < M; i++) {
        prefix[i][0] = prefix[i - 1][0] + A[i][0]; 
    }
    for (int i = 1; i < M; i++) { 
        for (int j = 1; j < N; j++) 
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + A[i][j]; 
    } 
    
    int queries = B.size();
    vector<int> ans;
    for(int i = 0 ; i < queries ; i ++){
        int r1 = B[i] - 1 ;
        int c1 = C[i] - 1 ;
        int r2 = D[i] - 1 ;
        int c2 = E[i] - 1 ;
        long long int res = prefix[r2][c2] % 1000000007;
        
        if(c1 > 0)
            res = res - prefix[r2][c1-1];
        if(r1 > 0)
            res = res - prefix[r1-1][c2];
        if(r1 > 0 && c1 > 0)
            res = res + prefix[r1-1][c1-1];
        
        ans.push_back(res);
        
        
    }
    return ans;
    
    
    
    
    
}
