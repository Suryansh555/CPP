#include<bits/stdc++.h>
using namespace std ; 

int solve(int A) {
    int arr[A + 1] = {-1} ;
    arr[1] = 1 ;
    arr[2] = 2 ;
    for(int i = 3 ; i <= A ; i++){
        int val = arr[i-1] + ((i-1) * arr[i-2]);
        arr[i] = val % 10003 ;
    }
    return arr[A] ;
}
