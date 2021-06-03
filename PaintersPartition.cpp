#include<bits/stdc++.h>
using namespace std;

long long int sum (vector<int> &C){
    long long int sum = 0 ;
    for(int i = 0 ;  i < C.size() ; i++){
        sum = sum + C[i];
    }
    return sum; 
}

long long int check(vector<int> &C , int A, int B , long long int mid ){
    int painter  = 1 ;
    long long int work = C[0];
    for(int i = 1 ; i < C.size() ; i++){
        if(work + C[i] > mid){
            painter++;
            work = C[i];
        }
        else{
            work = work + C[i];
        }
    }
    
    if(painter > A){
        return -1 ;
    }
    else{
        return mid * B ; 
    }
}
int Solution(int A, int B, vector<int> &C) {
    long long int start = *max_element(C.begin(), C.end());
    long long int end = sum(C);
    long long int mainans = end ;
    long long int ans = end * B; 
    while(start <= end){
        long long int mid = (start + end)/2;
        ans = check(C , A , B , mid);
        if(ans == -1){
            start = mid + 1 ;
        }
        else{
            mainans = ans ;
            end = mid - 1 ;
        }
    }
    return mainans % 10000003;
}
