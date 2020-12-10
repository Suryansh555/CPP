#include<iostream>
using namespace std;
int main(){
int n;
cin >> n;
for(int j = 0 ; j < 2*n-1 ; j++ ){
    cout<<"*";
}
cout<<endl;
for(int i = 1 ; i < n ; i++){
  for(int j = n-i; j > 0 ; j--  ){
      cout<<"*";
  }
  for(int b = 0 ; b < 2*i-1 ; b++ ){
      cout<<" ";
  }
  for(int j = n-i; j > 0 ; j--  ){
      cout<<"*";
  }
cout<<endl;    
}
for(int j = 1 ; j < n-1 ; j++){
for(int a = n - j - 1 ; a < n ; a++){
    cout<<"*";
}
for(int b = 0 ; b < 2*(n-j-1)-1 ; b++){
    cout<<" ";
}
for(int a = n - j - 1 ; a < n ; a++){
    cout<<"*";
}
cout<<endl;

}
for(int j = 0 ; j < 2*n-1 ; j++ ){
    cout<<"*";
}


}