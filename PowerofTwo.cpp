#include<iostream.h>
using namespace std;
int main(){
int n ;
cin >> n ;
int no = 2 ;
while(no < n){
 no = no << 1 ; 
}
if(no == n){
    cout<<"True";
}
else{
    cout<<"False";
}


return 0 ;
}