#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> result;
        map<int, int> mp;
        map<int, priority_queue<int>> mpvec;
        for(auto i:nums){
            mp[i] += 1;
        }
        for(auto i:mp){
          for(int j=0;j<i.second; j++)  
            mpvec[i.second].push(i.first);
        }
        for(auto i:mpvec){
            while(!i.second.empty()){
                result.push_back(i.second.top());
                i.second.pop();
            };
        }
        return result;
    }
};