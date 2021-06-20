#include<bits/stdc++.h>
using namespace std;

int check(int arr1[] , int arr2[]){
    for(int i = 0 ; i < 26 ; i++){
        if(arr2[i] != arr1[i]){
            return 0 ;
        }
    }
    return 1 ;
    
}

int solve(string A, string B) {
    int arr1[26];
    int arr2[26];
    memset(arr1,0,sizeof(arr1));
    memset(arr2,0,sizeof(arr2));
    for(int i = 0 ; i < A.size() ; i++){
        int index = A[i] - 'a';
        arr1[index]++;
    }
    int size = A.size();
    int m = B.size();
    int count = 0 ; 
    for(int i = 0 ; i < size ; i++){
        int index = B[i] - 'a';
        arr2[index]++;
    }
    count += check(arr1,arr2);
    
    for(int i = 1 ; i <= m - size ; i++){
        int deleteindex = B[i-1] - 'a';
        arr2[deleteindex]--;
        int insertindex = B[i+size-1] - 'a';
        arr2[insertindex]++;
        count += check(arr1,arr2);
    }
    return count ;
    
}
