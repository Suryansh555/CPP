#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > diagonal(vector<vector<int> > &A) {
    int n = A.size();
    vector<vector<int> > ans;
    for(int i = 0 ;i < n ; i++){
        vector<int> a;
        int startcol = i ; int startrow = 0 ;
        while (startrow < n && startcol >= 0) {
            a.push_back(A[startrow][startcol]);
            startcol--;
            startrow++;
    }
    ans.push_back(a);
    }
    for(int i = 1 ; i < n ; i++){
        vector<int> a;
        int startrow = i; int startcol = n - 1;
        while(startrow < n && startcol >= 0){
            a.push_back(A[startrow][startcol]);
            startcol--;
            startrow++;
            
        }
        ans.push_back(a);
    }
    return ans;
}
