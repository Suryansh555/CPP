#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > solve(int A) {
    vector<vector<int>> ans;

    for(int i = 1 ; i <= A ; i++){
        vector<int> part ;
        for(int j = A ; j > i ; j--){
            part.push_back(0);
        }
        for(int a = i ; a > 0 ; a--){
            part.push_back(a);
        }
        ans.push_back(part);
    }
    return ans;
}
