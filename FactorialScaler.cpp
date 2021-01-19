#include<bits/stdc++.h>
using namespace std;
int solve(int A) {
    if(A <= 1){
        return A ;
    }
    
    return A * solve(A-1);   
}
