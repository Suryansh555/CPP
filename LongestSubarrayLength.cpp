#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    int n = A.size();
    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;


    for (int i = 0; i < n; i++) { 
    sum += A[i] == 0 ? -1 : 1; 

    if (sum == 1) 
        maxLen = i + 1; 
    else if (mp.find(sum) == mp.end()) 
        mp[sum] = i; 
    if (mp.find(sum - 1) != mp.end()) {
        if (maxLen < (i - mp[sum - 1])) 
            maxLen = i - mp[sum - 1]; 
    } 
} 

return maxLen; 
}

