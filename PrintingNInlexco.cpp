#include<bits/stdc++.h>
using namespace std;
void Printingn(int x ,  int n ){
    if( x > n )  return ;
    if( x == n ) {
        cout << x << endl; 
        return ; 
    }

    if(x != 0 ){
        cout << x << endl;
    }

    for(int i = (x==0) ? 1:0 ; i <= 9 ; i ++ ){
        Printingn(10*x+i,n);
    }
}
int main(){

int n ;
cin >> n ;
Printingn(0,n);


}