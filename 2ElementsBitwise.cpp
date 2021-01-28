#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> &A) {
    int size = A.size();
    unsigned int ans = 0;
    for(int i = 0 ; i < size ; i++){
        ans ^= A[i];
    }
    int count = 0 ; 
    while(!(ans & 1)){
        count ++ ;
        ans >>= 1 ;
    }
    unsigned int a = 0 ;
    unsigned int b = 0;
    for(int i = 0 ; i < size ; i++){
        if(A[i] & (1 << count)){
            a = a ^ A[i];
        }
        else{
            b = b ^ A[i];
        }
    }
    vector<int> an ;
    if(a <= b){
        an.push_back(a);
        an.push_back(b);
    }
    else{
        an.push_back(b);
        an.push_back(a);
    }
    return an;
}
