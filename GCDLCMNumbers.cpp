#include<bits/stdc++.h>
using namespace std;
void printPair(int g, int l) 
{ 
    
} 
vector<int> solve(int g, int l) {
    vector<int> ans;
    if(l % g != 0){
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
    }
    if(l == g){
        ans.push_back(l);
        ans.push_back(l);
        return ans;
    }

    ans.push_back(g);
    ans.push_back(l);
    return ans;
}
