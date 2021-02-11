#include<bits/stdc++.h>
using namespace std;
string addBinary(string A, string B) {
    string c = "";
    int n = A.length();
    int m = B.length();
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    
    int i = 0 ;
    int sum = 0;
    int carry = 0 ;
    while(i < n && i < m){
        sum = (A[i] - '0') + (B[i] - '0') + carry ;
        carry = sum / 2 ;
        sum %= 2 ;
        c+=(sum + '0');
        i++;
    }
    while(i < n ){
        sum = (A[i] - '0') + carry ;
        carry = sum / 2 ;
        sum %= 2 ;
        c+=(sum + '0');
        i++;
    }
    while(i < m){
        sum = (B[i] - '0') + carry ;
        carry = sum / 2 ;
        sum %= 2 ;
        c+=(sum + '0');
        i++;
    }
    if(carry > 0){
        c+= '1' ;
    }
    reverse(c.begin(),c.end());
    return c;
    
}