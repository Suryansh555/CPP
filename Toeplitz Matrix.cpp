#include<bits/stdc++.h>
using namespace std;
bool checkDiagonal(vector<vector<int> > &mat, int i, int j)
{   int N = mat.size();
    int M = mat[0].size();
    int res = mat[i][j];
    while (++i < N && ++j < M) 
    {
        if (mat[i][j] != res)
            return false;
    }

    return true;
}

int solve(vector<vector<int> > &mat) {
    int N = mat.size();
    int M = mat[0].size();
        for (int i = 0; i < M; i++) 
    {
        if (!checkDiagonal(mat, 0, i))
            return false;
    }

    for (int i = 1; i < N; i++) 
    {
        if (!checkDiagonal(mat, i, 0))
            return false;
    }

    return true;
}
