#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pos=n-2;
        while(pos>=0&&nums[pos]>=nums[pos+1]){ 
            pos--;
        }
        if(pos==-1) sort(nums.begin(),nums.end());
        else{
            int curr=nums[pos];
            int here=-1;
            for(int i=pos+1;i<n;i++){
                if(nums[i]>curr) here=i;
            }
            swap(nums[here],nums[pos]);
            reverse(nums.begin()+pos+1,nums.end());
        }
    }
};