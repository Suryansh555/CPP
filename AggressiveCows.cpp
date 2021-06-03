#include<bits/stdc++.h>
using namespace std ;


bool check(vector<int> &A , int check , int B ){
    int last_placed = A[0];
    int cows = 1 ;
    int n = A.size();
    for(int i = 1 ; i < n ; i++){
        if(A[i] - last_placed >= check ){
            cows++;
            last_placed = A[i];
        }
        if(cows == B){
            return true;
        }
    }
        if(cows >= B){
            return true ;
        }
        else{
            return false;
        }
    }

int solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int start = 1 ;
    int size = A.size();
    int end = A[size - 1] - A[0];
    int ans = 1;
    while(start <=  end){
        int mid = (start + end)/2;
        if(check(A,mid,B)){
            ans = mid; 
           start = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
    }
    return ans; 
}
