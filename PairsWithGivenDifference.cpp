#include<bits/stdc++.h>
using namespace std ;

int solve(vector<int> &A, int B) {
    int count = 0 ; 
    unordered_map<int,int> st ;
    for(int i = 0 ; i < A.size() ;i++){
        st[A[i]]++;
    }
    for(auto it = st.begin() ; it != st.end() ; it++){
        if(st.find((it->first - B)) != st.end()){
            if((it -> first - B) == (it -> first) && it -> second == 1){
                count--;
            }
            count++;
        }
        (it -> second)--;
    }
    return count; 
}
