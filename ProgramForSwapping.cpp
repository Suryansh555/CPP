#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10 ;
    int b = 20 ;
    cout << "Before Swapping - " << "A = " << a << " B = " <<b << endl;
    a = a ^ b ;
    b = a ^ b ;
    a = a ^ b ;
    cout <<  "After Swapping - " << "A = " << a << " B = " <<b << endl;

    return 0 ;
}