#include<bits/stdc++.h>
using namespace std;

int solve(string A) {
    stack<int> s ;
    for(int i = 0 ; i < A.length() ; i++){
        if(A[i] == '{' || A[i] == '[' || A[i] == '('){
            s.push(A[i]);
        }
        if (s.empty())
            return false;
        char x ;
        switch (A[i]) {
        case ')':
             
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
 
        case '}':
 
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
 
        case ']':

            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    if(s.size() == 0){
        return 1 ;
    }
    return 0 ;
}
