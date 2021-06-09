#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    unordered_map<int,int> mp ;
    vector<int> ans ;
    int vsize = 0 ; 
    for(int i = 0 ; i < A.size() ; i++){
        if(mp.find(A[i])!= mp.end()){
            int index = mp[A[i]];
            auto it = ans.begin() + index;
            ans.erase(it);
            ans.push_back(A[i]);
            mp[A[i]] = vsize;
            for(auto it = mp.begin() ; it != mp.end() ; it++){
                if(it -> second > index){
                    it -> second = it -> second - 1 ;
                }
            }
        }
        else{
            ans.push_back(A[i]);
            mp[A[i]] = vsize;
            vsize++;
        }
    }
    return ans;
}
