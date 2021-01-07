#include <iostream>
using namespace std ;

int main(){
int a ;
cin >> a ;
for(int i = 1 ; i <= a ; i++){
    int mod = i % 2 ;
    for(int j = 1 ; j <= i ; j++){
     if((mod == 1 && j == 1) || (mod == 1 && j % 2 == 1 ) || (mod == 0 && j % 2 == 0)){
            cout << 1 ;
     }
     else {
         cout << 0 ;
     }
}

cout << endl;

}


    return 0 ;
}