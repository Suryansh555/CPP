#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0, count = 1;
        if (s.length() < 3)
            return 0;
        int i = 0, j = 2;
        vector<int> comp;
        map<char, int> mp;
        for (auto c : s)
        {
            if (mp.find(c) == mp.end())
            {
                mp[c] = count;
                comp.push_back(count);
                count++;
            }
            else
            {
                comp.push_back(mp[c]);
            }
        }
        // for (auto co : comp)
        // cout << co << " ";
        // cout << endl;
        while (j < s.size())
        {
            if (comp[i] != comp[i + 1] && comp[i] != comp[i + 2] && comp[i + 1] != comp[i + 2])
            {
                // cout << comp[i] << endl;
                ans++;
            }
            i++, j++;
        }
        return ans;
    }
};