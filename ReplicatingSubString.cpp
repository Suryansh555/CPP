#include<bits/stdc++.h>
using namespace std; 

int solve(int A, string B) {
    unordered_map<char,int> mp;
    for(int i = 0 ; i < B.length() ; i++){
        if(mp.find(B[i]) != mp.end()){
            mp[B[i]]++;
        }
        else{
            mp.insert({B[i],1});
        }
    }   
    for(auto it = mp.begin() ; it != mp.end() ; it++ ){
        if(it -> second % A != 0){
            return -1;
        }
    }
    return 1 ;
}
