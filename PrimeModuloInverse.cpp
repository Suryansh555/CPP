#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7 ;
long long int power(long long int x, unsigned int y, unsigned int m)
{
    if (y == 0)
        return 1;
    long long int p = power(x, y / 2, m) % m;
    p = (p * p) % m;
 
    return (y % 2 == 0) ? p : (x * p) % m;
}
long long int modInverse(int a, int m)
{
 
        return power(a, m - 2, m);
    
}
int solve(int A, int B) {
    return modInverse(A,B);
}
