#include<bits/stdc++.h>
using namespace std;
int solve(int A, int B, int C) {
    return A / ((B*C)/__gcd(B,C));
}
