#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < arr.size() ; i++){
            mp[arr[i]]++;
        }
        int lucky = INT_MIN;
        for(auto it : mp){
            if(it.first == it.second && it.first > lucky ){
                lucky = it.first ;
            }
        }
        if(lucky == INT_MIN){
            return -1;
        }
        return lucky ;
    }
};