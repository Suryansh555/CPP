#include<bits/stdc++.h>
using namespace std ;

void Insertatbottom(vector<int>&A , int x){
    if(A.size() == 0 ){
        A.push_back(x);
        return;
    }
    int temp = A[A.size()-1];
    A.pop_back();
    Insertatbottom(A,x);
    A.push_back(temp);
    return;
}

void Reverse(vector<int> &A){
    if(A.size() == 0){
        return;
    }
    int temp = A[A.size()-1];
    A.pop_back();
    Reverse(A);
    Insertatbottom(A,temp);

}

vector<int> solve(vector<int> &A) {
    Reverse(A);
    return A;
}
