#include<bits/stdc++.h>
using namespace std;


bool check(vector<int> &A, int B , int mid){
    int student = 1 ;
    int pages = A[0] ;
    if(pages > mid){
        return false;
    }
    for(int i = 1 ; i < A.size() ; i++){
        pages = pages + A[i];
        if(pages > mid){
            student++;
            pages = A[i];
            if(pages > mid ){
                return false;
            }
        }
        

    }
    if(student > B){
        return false;
    }
    else{
        return true;
    }
    
}
long long int sumofarray(vector<int> &A){
    long long int ans = 0 ;
    for(int i = 0 ; i < A.size() ;i++){
        ans = ans + A[i];
    }
    return ans;
}


int books(vector<int> &A, int B) {
    if(B > A.size()){
        return -1 ;
    }
    long long int start = *min_element(A.begin(),A.end()) ;
    long long int end = sumofarray(A);
    long long int ans = A[0]; 
    while(start <= end){
        long long int mid = (start + end)/2;
        if(check(A,B,mid)){
            ans = mid ; 
            end = mid - 1 ;
        }
        else{
            start = mid + 1 ;
        }
    }
    return ans;
    
}
