
#include<bits/stdc++.h>
using namespace std ; 

int prec(char x){
    if(x == '^'){
        return 2 ;
    }
    else if(x == '*' || x == '/' || x == '%'){
        return 1 ;
    }
    else if(x == '+' || x == '-' ){
        return 0 ;
    }
    else{
        return -1;
    }
}

string solve(string A) {
    stack<char> stk ;
    string postfix = "";
    
    for(int  i = 0 ; i < A.size() ; i++){
        if(A[i] >= 'a' && A[i] <= 'z'){
            postfix+= A[i];
        }
        else if(A[i] == '('){
            stk.push(A[i]);
        }
        else if(A[i] == ')'){
            while(stk.top() != '('){
                postfix += stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            while(stk.size() > 0  && (prec(stk.top()) >= prec(A[i]))){
                postfix += stk.top();
                stk.pop();
            }
            stk.push(A[i]);
        }
    }
    while(stk.size() > 0){
        postfix += stk.top();
        stk.pop();
    }
    return postfix ;
}
