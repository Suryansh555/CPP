#include<bits/stdc++.h>
using namespace std;
void backtracking(int start, vector<vector<int> >& result, vector<int>& A, vector<int>& row)
{
    int size = A.size();
    if (start>=size)
    {
        result.emplace_back(row);
        return;
    }
    
    auto currIndex = start + 1;
    while (currIndex<A.size() && A[currIndex]==A[start])
        ++currIndex;
        
    for (auto i = 0; i<=currIndex-start; ++i)
    {
        for (auto j = 0; j<i; ++j)
            row.emplace_back(A[start]);
        backtracking(currIndex, result, A, row);
        for (auto j = 0; j<i; ++j)
            row.pop_back();
    }
}
vector<vector<int> > subsetsWithDup(vector<int> &A) {
    vector<vector<int> > result;
    vector<int> row;
    sort(A.begin(), A.end());
    backtracking(0, result, A, row);
    sort(result.begin(), result.end());
    return result;
}