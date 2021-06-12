#include<bits/stdc++.h>
using namespace std ;

int longestConsecutive(const vector<int> &A) {
    unordered_set<int> st ;
    for(int i = 0 ; i < A.size() ; i++){
        st.insert(A[i]);
    }
    int ans = 0 ; 
    for(auto it = st.begin() ; it != st.end() ; it++){
        int x = *it ; 
        if(st.find(x-1) != st.end()){
            //notStart
            continue;
        }
        else{
            //Start
           int temp  = x+1; 
           int count = 1 ;
           while(st.find(temp) != st.end()){
               count++;
               temp++;
           }
           if(ans < count){
               ans = count;
           }
        }
    }
    return ans;
}
