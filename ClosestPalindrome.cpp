#include<bits/stdc++.h>
using namespace std;

string solve(string A) {
    int i = 0 ; 
    int j = A.length() - 1 ;
    
    int changes = 0 ;
    while(i <=  j){
        if(i == j && changes == 0){
            return "YES";
        }
        if(A[i] != A[j]){
            changes++;
        }
        i++;
        j--;
    }
    if(changes == 1){
        return "YES";
    }
    return "NO";
}
