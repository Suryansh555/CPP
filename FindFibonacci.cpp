#include<bits/stdc++.h>
using namespace std;
int findAthFibonacci(int A) {
    if(A == 0){
        return 0 ;
    }
    if(A <= 2){
        return 1 ;
    }
    
    return findAthFibonacci(A-1) + findAthFibonacci(A-2);
}
