#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ;
    int b ;
    int c ;
    cout << "Enter A value :-  " ;
    cin >> a ;
    cout << "Enter B value :-  ";
    cin >> b; 
    cout << "Enter C value :-  ";
    cin >> c ;
    cout << "Before Swapping : A = " << a << " B = " << b << " C = " << c << endl;
    a = a ^ b ;
    b = a ^ b ; 
    a = a ^ b ;
    a = a ^ c ;
    c = a ^ c ;
    a = a ^ c ;
    cout << "After Swapping : A = " << a << " B = " << b << " C = " << c << endl;
        return 0 ;
}
