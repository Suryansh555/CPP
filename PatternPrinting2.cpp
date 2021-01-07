#include <iostream>
using namespace std;

int main(){
 int a ;
 cin >> a ;
 for(int i = 1 ; i <= a ; i++){
     for(int j = 1 ; j <= i ; j++){
         cout << j << "   ";
     }
     for(int z = 2 * a - (2 * i) ; z > 1 ; z = z - 1  ){
         cout << "    ";
     }
     for(int b = i ; b >= 1 ; b--){
         if(i == a && b == i ){
             continue;
         }
         cout << b << "   ";
     }

    cout<<endl;

 }



    return 0 ;
}