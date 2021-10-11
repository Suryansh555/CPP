
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp ;
        int size = nums.size();
        vector<int> ans ;
        for(int i = 0; i < size ; i++){
            if(mp.find(nums[i]) == mp.end()){
            if(mp.find(target - nums[i]) != mp.end()){
                    ans.push_back(mp[target - nums[i]]);
                    ans.push_back(i);
                }
                mp.insert({nums[i],i});
                
            }
            else{
                if(target - nums[i] == nums[i]){
                    ans.push_back(mp[target - nums[i]]);
                    ans.push_back(i);
                }
            }

        }
        return ans ;
    }
};