#include<bits/stdc++.h>
using namespace std;
int TrailingZeros(int n)
{
    int res = 0;

    for (int i = 5; n / i >= 1; i *= 5)
        res += n / i;
 
    return res;
}
 
int trailingZeroes(int A) {
    return(TrailingZeros(A));
}

int main(){



    return 0 ;
}