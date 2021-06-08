#include<bits/stdc++.h>
using namespace std ; 
vector<int> lszero(vector<int> &A) {
    int left;
    int right; 
    int maxlength = -1 ;
    int length = -1 ; 
    int sum = 0 ; 
    unordered_map<int,int> st ; 
    st[0] = -1 ;
    for(int i = 0 ; i < A.size() ; i++){
        sum = sum + A[i];
        if(st.find(sum) != st.end()){
            length = i - st[sum] ; 
            if(maxlength < length){
                maxlength = length ; 
                right = i ; 
            }
        }
        else{
            st.insert({sum,i});
        }
    }
    vector<int> ans; 
    for(int i = (right - maxlength + 1) ; i <= right ; i++){
        ans.push_back(A[i]);
    }
    
    return ans; 
}
