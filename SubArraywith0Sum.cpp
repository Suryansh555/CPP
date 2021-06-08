#include<bits/stdc++.h>
using namespace std; 

int solve(vector<int> &A) {
    unordered_set<long long int> st ; 
    long long int sum = 0; 
    for(int i = 0 ; i < A.size() ; i++){
        if(sum == 0 && i != 0){
            return 1 ;
        }
        sum = sum + A[i]; 
        
        if(st.find(sum) != st.end()){
            return 1 ;
        }
        else{
            st.insert(sum);
        }
    }
    return 0 ;
}
