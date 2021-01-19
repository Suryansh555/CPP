#include<bits/stdc++.h>
using namespace std;
int Solution(vector<int> &A) {
    int size = A.size();
    vector<long long int> prefix;
    long long int ans = A[0];
    prefix.push_back(ans);
    for(int i = 1 ; i < size ; i++){
            ans =  prefix[i-1] + A[i];
            prefix.push_back(ans);
    }
    sort(prefix.begin(),prefix.end());
    for(int i = 0; i < size ; i++){
        if(prefix[i] == 0){
            return 1 ;
        }
    }
    for(int i = 0 ; i < size -1 ; i++){
        if(prefix[i] == prefix [i+1]){
            return 1 ;
        }
    }
    return 0 ;
}
