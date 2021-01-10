#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > solve(int A) {
  vector<vector<int>> ans;
    for(int i = 1 ; i <= A ; i++){
        vector<int> add;
        for(int j = 1 ; j <= i ; j++){
            add.push_back(j);
        }
        ans.push_back(add);
    }
    return ans;
}
