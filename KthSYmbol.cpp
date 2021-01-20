#include<bits/stdc++.h>
using namespace std;
int Solution(int N, int K) {
        if(N==1) return 0;
        if(K%2==0) return Solution(N-1,K/2)==0 ? 1:0;
        else return Solution(N-1,(K+1)/2)==0 ? 0:1;
}
