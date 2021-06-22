#include<bits/stdc++.h>
using namespace std; 


vector<int> nextGreater(vector<int> &A) {
    vector<int> arr(A.size(), -1) ;
    stack<int> s;
    for(int i = 0 ; i < A.size() ; i++){
        if(s.empty()){
            s.push(i);
        }
        else{
            while(s.size() > 0 && A[i] > A[s.top()]){
                arr[s.top()] = A[i];
                s.pop();
            }
            s.push(i);
        }
    }
    return arr;
}
