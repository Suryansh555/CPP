#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string A) {
    unordered_set<char> hash ;
    int p1 = 0 ; 
    int p2 = 1 ;
    int ans = 1 ;
    hash.insert(A[p1]);
    int n = A.length() ;
    while(p2 < n){
        if(hash.find(A[p2]) == hash.end()){
            hash.insert(A[p2]);
            p2++;
            ans = max(ans,p2-p1);
            
        }
        else{
            hash.erase(A[p1]);
            p1++;
        }
    }
    return ans;
}
