#include<iostream.h>
using namespace std;
int main(){
int n ;
cin >> n;
int no ;
int count = 0;

for(int i = 0 ; i < n ; i++) {
 cin >> no;
 count = 0 ;
 while(no != 0){
     if(no&1 == 1){
         count++;
     }
      no = no >> 1 ;
}

 cout << count << endl;
}





}