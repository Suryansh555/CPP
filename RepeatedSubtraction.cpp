#include<bits/stdc++.h>
using namespace std;
int Solution (int A, int B) {
    if(A == 0){
        return B; 
    }
    if(B == 0){
        return A; 
    }
     return 2*__gcd(A,B);
}
