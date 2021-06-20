#include<bits/stdc++.h>
using namespace std ;


string smallestPrefix(string A, string B) {
    int m = A.length();
    int n = B.length();
    int p1 = 1 ;
    string ans ;
    ans += A[0];
    int p2 = 0 ;
    while(A[p1] < B[p2]){
        p1++;
    }

    return  ans + A.substr(1,p1-1) +  B.substr(0,p2+1);
}

