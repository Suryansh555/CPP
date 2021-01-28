#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int a;
    cout << "Enter value :-  ";
    cin >> a;
    int om = 0x5555555;
    int em = 0xAAAAAAAA;
    unsigned int even_bits = a & em ;
    unsigned int odd_bits = a & om ; 
    unsigned int ans = (even_bits >> 1) | (odd_bits << 1) ; 
    cout << "Answer after swapping is = " << ans << endl;

}