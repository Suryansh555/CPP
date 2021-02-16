#include<bits/stdc++.h>
using namespace std;
int fast_power(long long A, long long B, long long mod) {
        
        long long ans = 1;
        while(B > 0) {
            if(B & 1) {
                ans = (ans * A) % mod;
            }
            A = (A%mod * A%mod) % mod;
            B = B >> 1;
        }
        return ans % mod;
    }
    
    int Solution(int A, int B) {
        
        long long fact = 1;
        long long mod = (1e9 + 7);
        // calculating factorial of B
        for(long long i = 2; i <= B; i += 1) {
            fact = (fact * i) % (mod - 1);  // (mod-1) is used accoring to Fermat Little theorem.
        }
        int ans = fast_power(A, fact, mod);     // calculating power by divide and conquer
        return ans;
    }
int main(){



    return 0 ;
}