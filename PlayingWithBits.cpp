#include <iostream>
using namespace std;
int main(){
int n ;
cin >> n;
int b;
int c ;
int count = 0;
for(int i = 0 ; i < n ; i++){
    cin >> b ;
    cin >> c ;
    count = 0 ;
    for( int i = b ; i <= c ; i++){
        b = i ;
       while(b != 0){
        if(b&1 == 1){
    count ++;
    } 
       b=b>>1; 
}
    }
   cout << count << endl; 


    
}
return 0 ;
}