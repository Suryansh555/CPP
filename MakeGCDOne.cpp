#include<bits/stdc++.h>
using namespace std;
int Solution(vector<int> &A) {
    int n = A.size();
    int gcd = 0; 
    for (int i = 0; i < n; i++) 
        gcd = __gcd(gcd, A[i]); 
    if (gcd > 1) 
        return -1; 
    else
        return 0; 
}
