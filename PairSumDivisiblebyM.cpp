#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7 ;
int solve(vector<int> &A, int B) {
    vector<int> cnt (B,0);
    for(int i = 0 ; i < A.size() ; i++){
        cnt[A[i] % B] = cnt[A[i] % B ] + 1 ;
    }
    ll res = (1LL * cnt[0] * (cnt[0] - 1))/2 ;
    for(int i = 1 ; i <= B / 2 ; i++){
        if(i == B-i){
            res += (1LL * cnt[i] * (cnt[i] - 1))/2;
            res %= MOD ;
        }    
        else {
            res +=  (1LL * cnt[i] * cnt[B-i]);
            res %= MOD ;   
        }    
}
return res ;
}

int main(){



    return 0 ;
}