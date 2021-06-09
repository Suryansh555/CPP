#include<bits/stdc++.h>
using namespace std ;

vector<int> solve(vector<int> &A) {
    
    unordered_set<int> st;
    vector<int> ans;
    for(int i = A.size()- 1 ; i >= 0 ; i--){
        if(st.find(A[i]) == st.end()){
            st.insert(A[i]);
            ans.push_back(A[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
