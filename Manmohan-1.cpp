#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;

    for(int i = 0 ; i< n ; i++){
     for(int j = 0 ; j < i ; j = j + i + 1){
         cout<<1;
     }
     for(int a = 0 ; a <= i - 2 ; a++ ){
         if(i % 2 == 0){
             cout<<1;
         }
         else{
             cout<<0;
         }
     }

     for(int z = 0 ; z <= i ; z = z + i + 1){
         cout<<1<<endl;
     }


    }
    return 0;
}