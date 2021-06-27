
#include<bits/stdc++.h>
using namespace std;

void ComputeSigns(string A,map<char,int>& sign_A){
        stack<int> st ;
    st.push(1);
    
    for(int i = 0 ; i < A.size() ; i++){
        if(A[i] == '('){
            if(i == 0){
                continue ;
            }
            
            if(A[i-1] == '-'){
                st.push(-1 * st.top());
            }
            else{
                st.push(st.top());
            }
        }
        else if(A[i] == ')'){
            st.pop();
        }
        else if(A[i] >= 'a' && A[i] <= 'z'){
            int global = st.top();
            int local = 1 ;
            if(A[i-1] == '-'){
                    local = -1 ;
            }
            sign_A[A[i]] = local * global ;  
        }
    }
}


int solve(string A, string B) {
    map<char,int> sign_A;
    map<char,int> sign_B ;
    ComputeSigns(A,sign_A);
    ComputeSigns(B,sign_B);
    for(int i = 0 ; i < A.size() ; i++ ){
        if(sign_A[A[i]] != sign_B[A[i]]){
            return 0 ;
        }
    }
        return 1 ;
    
    
    
    
}
