#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
     
    int n=g.size();
    int m=s.size();
    int j=0,maxx=0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    for(int i=0;i<m && j<n;i++)
        {
            if(s[i]>=g[j])
            {
                maxx++;
                j++;
            }
        }
    return maxx;
    }
};