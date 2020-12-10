#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin >> n;
int result;
while(n!= 0){
  int a;
  cin>>a;
  int num = a;
  int count = 0;
  result = 0 ;
  while(num != 0 ){
    num = num / 10;
    count++;
  }
for(int i = 0 ; i < count ; i++){
    result = result + (pow((a%10),(pow(2,i))))*pow(2,i);
    a = a /10 ;
  }
  cout<<result<<endl;

    n--;
}


    return 0 ;
}