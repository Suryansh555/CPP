#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i:nums){
            map[i]++;
        }
        int degree=0;
        for(auto i:map){
            degree=max(degree,i.second);
        }
        unordered_map<int,int> count;
        int lo=0,res=nums.size();
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            while(count[nums[i]]==degree){
                res=min(res,i-lo+1);
                count[nums[lo]]--;
                lo++;
            }        
        }
        return res;       
    }
};