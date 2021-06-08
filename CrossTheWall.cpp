#include<bits/stdc++.h>
using namespace std ; 

int solve(int A, int B, vector<int> &C) {
    unordered_map<int,int> mp ; 
    int sum = 0 ; 
    for(int i = 0 ; i < C.size() ; i++){
        sum = sum + C[i];
        if(sum == B){
            sum = 0 ; 
            continue;
        }
        if(mp.find(sum) != mp.end()){
            mp[sum]++;
        }
        else{
            mp[sum] = 1 ;
        }
    }
    int smallest = A ;
    for(auto it = mp.begin() ; it != mp.end() ; it++){
        int value = it -> second ; 
        if((A - value) < smallest){
            smallest = A - value ;
        }
    }
    return smallest ;
}
