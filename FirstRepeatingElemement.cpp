#include<bits/stdc++.h>
using namespace std ;

int solve(vector<int> &A) {
    unordered_map<int,vector<int>> freq;
    for(int i = 0 ; i < A.size() ; i++){
        if(freq.find(A[i]) != freq.end()){
            freq[A[i]][0]++ ;
        }
        else{
            vector<int>a;
            a.push_back(1);
            a.push_back(i);
            freq[A[i]] = a ;
        }
    }
    
    int repeat ;
    int shortest = A.size();
    for(auto it = freq.begin() ; it!=freq.end() ; it++){
        if((it->second)[0] > 1){
            if((it->second)[1] < shortest){
                repeat = it->first;
                shortest = (it->second)[1];
            }
        }
    }
    if(shortest == A.size()){
        return -1 ;
    }
    return repeat;
}
