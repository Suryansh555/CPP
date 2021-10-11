#include<bits/stdc++.h>
using namespace std ;

void Sum(float a , float b){
    cout << "Sum with Two 'Floats' Called " << endl ; 
    float sum = a + b ;
    cout << "Sum = " << sum << endl ;
}
void Sum(int a , int b){
    cout << "Sum with Two int Called " << endl ; 
    int sum = a + b ;
    cout << "Sum = " << sum << endl ;
}
void Sum(int a , int b , int c){
    cout << "Sum with Three int Called " << endl ; 
    int sum = a + b + c ;
    cout << "Sum = " << sum << endl ;
}

int main(){
    // Two int
    Sum(1,3);
    // Three int
    Sum(1,3,4);
    // Two Floats
    Sum(3.0f,4.0f);
}