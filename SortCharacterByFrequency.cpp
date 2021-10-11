#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        priority_queue<pair<int, int> > pq;
        string ans;
        
        for(int i=0; i<s.size(); i++)
            freq[s[i]]++;
        
        for(auto m: freq)
            pq.push({m.second, m.first});
        
        while(!pq.empty()){
            pair<int, int> f = pq.top();
            pq.pop();
            for(int i=0; i<f.first; i++)
                ans+= f.second;
        }
        return ans;
    }
};