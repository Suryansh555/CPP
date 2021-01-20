#include<bits/stdc++.h>
using namespace std;
void subset(vector<int> &A , int k , vector<vector<int>> &v , vector<int> &v1){
    v.push_back(v1);
    for(auto i = k ; i < A.size() ; i++){
        v1.push_back(A[i]);
        subset(A,i+1,v,v1);
        v1.pop_back();
    }
    
    
}
vector<vector<int> > subsets(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>> v;
    vector<int> v1;
    subset(A,0,v,v1);
    return v;
}
