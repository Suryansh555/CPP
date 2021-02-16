#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    
    if (n <= 1)
        return false;

 
    // Check from 2 to n-1
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}


int solve(vector<int> &A) {
    int siz = size(A);
    int count = 0 ;
    for(int i = 0 ; i < siz ; i++){
        if(prime(A[i])){
            count++;
        }
    }
    return count;
}
