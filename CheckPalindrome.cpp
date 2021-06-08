#include<bits/stdc++.h>
using namespace std;

int Solution(string A) {
    unordered_map<char,int> mp;
    for(int i = 0 ; i < A.length() ; i++){
        if(mp.find(A[i]) != mp.end() ){
            mp[A[i]]++;
        }
        else{
            mp[A[i]] = 1 ;
        }
    }
    int count = 0 ; 
    for(auto it = mp.begin() ; it != mp.end() ; it++ ){
        if(it -> second % 2 != 0){
            count++;
            if(count > 1){
            return 0 ;
            }
        }
    }
    return 1;
}
