#include<bits/stdc++.h>
using namespace std ;

vector<int> solve(vector<int> &A, vector<int> &B) {
    unordered_map<int,int> first ;
    unordered_map<int,int> second ;
    for(int i = 0 ; i < A.size() ; i++){
        if(first.find(A[i]) != first.end()){
            first[A[i]]++;
        }
        else{
            first.insert({A[i],1});
        }
    }
        for(int i = 0 ; i < B.size() ; i++){
        if(second.find(B[i]) != second.end()){
            second[B[i]]++;
        }
        else{
            second.insert({B[i],1});
        }
    }
    vector<int> ans; 
    for(int i = 0 ; i < A.size() ; i++){
        if(second.find(A[i]) != second.end() && second[A[i]] > 0){
            second[A[i]]--;
            first[A[i]]--;
            ans.push_back(A[i]);
        }
    }
    
    return ans;
}
