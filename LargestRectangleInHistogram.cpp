#include<bits/stdc++.h>
using namespace std ;

vector<int> leftSmaller(vector<int> &A){
    vector<int> ans (A.size(),-1);
    stack<int> s ;
    for(int i = A.size() - 1  ; i >= 0 ; i--){
        if(s.empty()){
            s.push(i);
        }
        else{
            while(s.size() > 0 && A[i] < A[s.top()]){
                ans[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
    }
    return ans;
}

vector<int> rightSmaller(vector<int> &A){
    vector<int> ans (A.size(),A.size());
    stack<int> s ;
    for(int i = 0 ; i < A.size() ; i++){
        if(s.empty()){
            s.push(i);
        }
        else{
            while(s.size() > 0 && A[i] < A[s.top()]){
                ans[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
    }
    return ans;
    
    
}


int largestRectangleArea(vector<int> &A) {
    if(A.size() == 1){
        return A[0];
    }
    vector<int> ls ;
    vector<int> rs ;
    ls = leftSmaller(A);
    rs = rightSmaller(A);
    int area = INT_MIN ;
    
    for(int i = 0 ; i < A.size() ;  i++){
        area = max(area,A[i] * (rs[i] - ls[i] - 1));
    }
    return area ;
    
}
