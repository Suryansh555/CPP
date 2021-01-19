#include<bits/stdc++.h>
using namespace std;

string solve(string A, int B) {
    
    int size = A.size();
    B = B % size;
    reverse(A.begin()+(size-B),A.begin()+(size));
    reverse(A.begin(),A.begin()+(size-B));
    reverse(A.begin(),A.end());
    return A;
}

int main(){


    return 0 ;
}