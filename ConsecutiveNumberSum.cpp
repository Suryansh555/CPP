#include<bits/stdc++.h>
using namespace std;
int solve(int A) {
    int root = sqrt(2*A);
    int ans = 0 ;
    for(int i = 1 ; i <= root ; i++){
        int T = A - ((i * (i-1))/2);
        if(T % i == 0){
            ans++ ;
        }
    }
return ans ;
}
