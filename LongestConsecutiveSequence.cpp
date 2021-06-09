#include<bits/stdc++.h>
using namespace std ;

int longestConsecutive(const vector<int> &A) {
    unordered_set<int> st;
    int length = 1 ;
    int max_length = 1 ;
    
    for(int i = 0 ; i < A.size() ; i++){
        int left = 0 ;
        int right = 0 ;
        int k = A[i] - 1 ;
        int j = A[i] + 1 ;
        while(true){
            if(st.find(k) != st.end()){
                left++ ;
                k--;
            }
            if(st.find(j) != st.end()){
                right++ ;
                j++;
            }
            if((st.find(j) == st.end()) && (st.find(k) == st.end())){
                break;
            }
        }
        length = 1 + left + right ; 
        if(length > max_length){
            max_length = length;
        }
     st.insert(A[i]);   
     
    }

  
    return max_length;
}
