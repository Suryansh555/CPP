#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a = 0;
    int b = 2 ;
    int c = 2 ;
    cout<<" "<<a<<" "<<b<<" ";
    while(c<=n){
        c = 4*b + a ;
        a = b ;
        b = c ;
        if(c > n)
            break;
        cout<<c<<" ";
    }
}