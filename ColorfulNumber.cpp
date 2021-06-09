#include<bits/stdc++.h>
using namespace std ;

int colorful(int A) {
    unordered_set<int> mp ;
    string B = to_string(A);
    for(int i = 0  ; i < B.length() ; i++ ){
        int product = 1 ;
        for(int j = i ; j < B.length() ; j++){
            int num = B[j] - '0';
            product = product * num ; 
            if(mp.find(product) != mp.end()){
                return 0 ;
            }
            mp.insert(product);
        }
    }
    return 1 ; 
}
