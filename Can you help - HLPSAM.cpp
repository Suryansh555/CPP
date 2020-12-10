#include <iostream>
using namespace std;

int main() {
 int n;
 cin>>n;
 while(n!=0){
     int a ;
     cin >> a;
     int b ;
     cin >> b ;
     long long int sum = 0;
     if(a % 2 ==0){
         int num = a/2;
         while(num!=0){
             sum = sum + num -1;
             num--;
         }
         sum *=2;
    }
    else{
        int num = (a+1)/2;
             while(num!=0){
             sum = sum + num-1;
             num--;
         }
          sum = (2 * sum) - (a/2); 
         
    }
    sum *=2;
    if(b > sum){
        cout<<b-sum<<" "<<"Loss"<<endl;
    }
    else if(sum > b){
        cout<<sum-b<<" "<<"Profit"<<endl;
    }
    else{
        cout<<0<<" "<<"Null"<<endl;
    }
    
  
    
     n--;
     
 }
}
