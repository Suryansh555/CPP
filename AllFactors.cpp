#include <bits/stdc++.h>
using namespace std;

vector<int> allFactors(int A) {
    vector<int> ab = {};
    for(int  i = 1 ; i * i <= A  ; i++ ){
        if(A % i == 0){
            ab.push_back(i);
            ab.push_back(A/i);
        }
    }
    ab.push_back(A);
    return ab;
}

int main(){


    return 0 ;
}
