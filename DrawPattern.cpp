#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j < i ; j++){
            cout << " ";
        }
        int z ;
        for( z = 64 + i ; z <= 64 + n ; z++){
            cout << (char)z ;
        }
        for(z = z-2; z >= 64 + i ; z-- ){
            cout << (char)z;
        }
        cout << endl;
    }
    return 0 ;

}