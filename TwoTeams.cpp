#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7 ;
long long int power(long long int x, unsigned n)
{
    if (n == 0) {
        return 1;
    }
 
    long long int pow = power(x, n / 2) % MOD;
 
    if (n & 1) {
        return (x * pow * pow) % MOD;
    }
 
    return (pow * pow) % MOD;
}
int solve(int A) {
    return ((power(1LL * 2,1LL * A - 1)))-1;
}

int main(){



    return 0 ;
}