#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    int ans = 0; 
    int n = A.size();
    vector<int> xorArr;
    unordered_map<int,int> mp;
    xorArr.push_back(A[0]);
    // Making Prefix xor  Array 
    for(int i = 1 ; i < A.size() ; i++){
        xorArr.push_back(xorArr[i-1] ^ A[i]);
    }
    
    for (int i = 0; i < A.size(); i++) {
        if (xorArr[i] == B)
            ans++;
        
        int tmp = B ^ xorArr[i];
        if(mp.find(tmp) != mp.end()){
            ans = ans + mp[tmp];
        }
    
        mp[xorArr[i]]++;
    }
    return ans;

}

