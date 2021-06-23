#include<bits/stdc++.h>
using namespace std;

string solve(string A) {
    stack<char> s;
    string ans = "";
    for(int i = 0 ; i < A.size(); i++){
        if(s.empty()){
            s.push(A[i]);
        }else{
            if(A[i] == s.top()){
                s.pop();
            }else{
                s.push(A[i]);
            }
        }
    }
    while(s.size() != 0){
        ans += s.top() ; 
        s.pop();
    }
    reverse( ans.begin(), ans.end());
    return ans ;
}
