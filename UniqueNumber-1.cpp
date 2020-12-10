#include<iostream>
using namespace std;
int main(){
int n ;
cin >> n;
int b ;
int result = 0 ;
for(int i = 0 ; i<n; i++){
    cin >> b;
    result = result ^ b;
}
cout<<result;
return 0 ;
}