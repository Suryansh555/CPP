   #include <bits/stdc++.h>
   using namespace std;
   typedef long long int lli;
   const lli MOD = 1e9 + 7;
   
   int gcd(int a, int b) { return !b ? a : gcd(b, a % b); }
   int lcm(int a, int b) { return (a * b) / gcd(a, b); }
   lli cnt(lli x, lli A, lli B) {
      return (x / A) + (x / B) - (x / lcm(A, B));
   }
   int nthMagicalNumber(int N, int A, int B) {
      lli l = 2;
      lli r = 1e14;
      lli ret = 0;
      while (l <= r) {
         lli mid = l + (r - l) / 2;
         lli k = cnt(mid, A, B);
         if (k < N) {
            l = mid + 1;
         } else {
            ret = mid;
            r = mid - 1;
         }
      }
      ret %= MOD;
      return ret;
   }
int solve(int A, int B, int C) {
    return nthMagicalNumber(A, B, C);
}
