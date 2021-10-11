#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    unordered_map<string,int> mp;
    unordered_map<string,bool> mpbool;
    unordered_map<int,stack<string>> mpstack;
    vector<string> v;
    
    int mini=INT_MAX;
    
    for(int i=0;i<list1.size();i++)
    {
        if(!mpbool[list1[i]]) { mp[list1[i]]=i; }
        
        mpbool[list1[i]]=1;
    }
    
    for(int i=0;i<list2.size();i++)
    {
        if(mpbool[list2[i]])
        {
            mini=min(mini,i+mp[list2[i]]);
            
            mpstack[(i+mp[list2[i]])].push(list2[i]);
        }
    }
    
    while(!mpstack[mini].empty())
    {
        v.push_back(mpstack[mini].top());
        
        mpstack[mini].pop();
    }
    
    return v;
    
}
    };