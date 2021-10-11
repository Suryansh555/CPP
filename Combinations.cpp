#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    
    void eumerate(int index, vector<int>& vec, vector<vector<int>>& result, int n, int start) {
        int k = vec.size();
        for (int i = start; i <= n - (k - 1) + index; i++) {
            vec[index] = i;
            if (index == k - 1) {
                result.push_back(vec);
            } else {
                eumerate(index + 1, vec, result, n, i + 1);
            }
        }
}
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> vec(k, 0);
        eumerate(0, vec, result, n, 1);
        return result;
    }
};



    
