#include<bits/stdc++.h>
using namespace std; 

long long int Max(long long int sum , long long int max_sum){
    if(sum >  max_sum){
        return sum ;
    }
    else{
        return max_sum;
    }
}

bool check(vector<int> &A, int B , long long int mid){
    long long int sum = 0; 
    for(int i = 0 ; i  < mid ; i++){
        sum = A[i] + sum ;
    }
    long long int max_sum = sum ;
    
    for(int i = mid ; i < A.size() ; i ++){
        sum = sum + A[i] - A[i-mid];
        max_sum = Max(sum,max_sum);
    }
    
    if(max_sum > B){
        return false;
    }
    else{
        return true ;
    }
}

int Solution(vector<int> &A, int B) {
    long long int start = 1 ;
    long long int end = A.size();
    long long int ans = 1;
    while(start <=  end){
        long long int mid = (start + end)/2;
        if(check(A,B,mid)){
            ans = mid;
            start = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
    }
    return ans;
}
