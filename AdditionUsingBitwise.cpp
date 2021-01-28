#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y ;
    cout << "Enter Two Numbers which you want to add  :- " ;
    cin >> x ;
    cin >> y ;
    while (y != 0)
    {
        int carry = x & y;
        x = x ^ y; 
        y = carry << 1;
    }
    cout << "Result = " << x ;
    return 0 ;
}