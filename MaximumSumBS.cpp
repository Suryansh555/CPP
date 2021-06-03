#include<bits/stdc++.h>
using namespace std ;

bool check(vector<int> &A, int B , int mid){
    long long int max ;
    long long int sum = 0 ;
    for(int i = 0 ; i < mid ; i++){
        sum = sum + A[i];
    }
    max = sum ;
    long long int curr = max ; 
    for(int i = mid ; i < A.size() ; i++ ){
        curr = curr - A[i-mid] + A[i] ; 
        if(max < curr){
            max = curr; 
        }
    }
    if(max <= B){
        return true ;
    }
    else{
        return false;
    }
}


int solve(vector<int> &A, int B) {
    int start = 1 ;
    int end = A.size();
    int ans = 0 ;
    while(start <= end){
        int mid = (start + end)/2 ;
        if(check(A,B,mid)){
            ans = mid ;
            start = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
    }
    return ans;
}
