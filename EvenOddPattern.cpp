#include <iostream.h>
using namespace  std;
int main(){
 int a,row,x,col ;
 cin >> a;
 for(row  = 1; row <= a ; row++){
    if(row%2 == 0 ){
        x = 0 ;
    }
    else {
        x = 1;
    }
    cout << x << " ";
    x = 1 - x ;
    for(col = 1 ; col < row ; col = col + 1){
        cout << x<< " ";
        x = 1-x;


    }
    cout<<endl;



 }



}