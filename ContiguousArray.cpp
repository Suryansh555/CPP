#include<bits/stdc++.h>
using namespace std ;

int solve(vector<int> &A) {
    int length = 0 ;
    int max_length = 0 ;
    int sum = 0 ;
    unordered_map<int,int> mp ;
    mp[0] = -1 ;
    for(int i = 0 ; i < A.size(); i++){
        if(A[i] == 0){
            sum = sum + -1 ; 
        }
        else{
            sum = sum + 1 ;
        }
        if(mp.find(sum) != mp.end()){
            length = i - mp[sum];
            if(length > max_length){
                max_length = length ;
            }
        }
        else{
            mp[sum] = i ;
        }
    }
    return max_length ; 
    
}
