#include<bits/stdc++.h>
using namespace std ;

void  leftSmaller(vector<int> &A , vector<int>&ans , stack<int> &s){
    
    while(s.size()!= 0){
        s.pop();
    }
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
    return ;
}

 void rightSmaller(vector<int> &A , vector<int>&ans , stack<int> &s){
    
    while(s.size()!= 0){
        s.pop();
    }
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
    return ;
    
    
}


int Histogram(vector<int> &A ) {
    if(A.size() == 1){
        return A[0];
    }
    stack<int> s ;
    vector<int> ls (A.size(),-1);
    vector<int> rs (A.size(),A.size());
    leftSmaller(A , ls , s);
    rightSmaller(A , rs , s);
    int area = INT_MIN ;
    
    for(int i = 0 ; i < A.size() ;  i++){
        area = max(area,A[i] * (rs[i] - ls[i] - 1));
    }
    return area ;
    
}





int solve(vector<vector<int> > &A) {
    int row = A.size();
    int col = A[0].size();
    int ans = INT_MIN ;
    for(int i = 0 ; i < row ; i ++){
        for(int j = 0 ; j < col ; j++){
            if(i!=0 && A[i][j] != 0)
                A[i][j] += A[i-1][j];
             }
             ans = max(ans,Histogram(A[i]));  
    }
    return ans ;
}
