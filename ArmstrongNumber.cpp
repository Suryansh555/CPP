#include<iostream>
#include<cmath>
using namespace std;
int main() {
   int n ;
   cin >> n ; 
   int sum = 0 ;
   int res = n; 
   int digits = 0 ;
   while(n > 0){
       n = n / 10;
       digits = digits + 1;
   }
   n = res;
   while(n > 0){
     int no = n % 10 ; 
       sum = sum  + pow(no,digits);
      n = n / 10 ;
    }



    if(sum == res){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
	return 0;
}