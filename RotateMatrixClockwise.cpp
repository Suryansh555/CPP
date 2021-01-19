#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int> > &arr) {
    int R = arr.size();
    int C = arr[0].size();
    for (int i = 0; i < R; i++)
        for (int j = i; j < C; j++)
            swap(arr[i][j], arr[j][i]);
    for (int i = 0; i < R; i++)
        for (int j = 0, k = R - 1; j < k; j++, k--)
            swap(arr[i][j], arr[i][k]);
    
    
}
