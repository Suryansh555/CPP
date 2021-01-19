#include<bits/stdc++.h> 
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
    int result = 0;
    int n = height.size();
    // maximum element on left and right
    int left_max = 0, right_max = 0;
 
    // indices to traverse the array
    int lo = 0, hi = n - 1;
 
    while (lo <= hi) {
        if (height[lo] < height[hi]) {
            if (height[lo] > left_max)
                // update max in left
                left_max = height[lo];
            else
                // water on curr element = max - curr
                result += left_max - height[lo];
            lo++;
        }
        else {
            if (height[hi] > right_max)
                // update right maximum
                right_max = height[hi];
            else
                result += right_max - height[hi];
            hi--;
        }
    }
 
    return result;
    }
};