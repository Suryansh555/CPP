#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int A) {
    int rem = 0;
    int pow1 = -1 ;
    vector<int> ans ;
    while(A > 0){
        rem = A % 3 ; 
        A = A / 3 ;
        pow1 ++ ;
        while(rem != 0){
            ans.push_back(pow(3,pow1));
            rem-- ;
        }
    }
    return ans;
}
