#include<iostream>
using namespace std;
int main (){
    int n ;
    cin>>n;
    for(int i = 1 ; i<= n ; i++){
        cout<<"*"<<"\t";
    }
    cout<<endl;
    for(int i = 0 ; i<= (n-1)/2 - 1 ; i++ ){
        for(int j = (n-1)/2-i ; j >= 1 ; j--){
            cout<<"*"<<"\t";
        }
        for(int j =  0 ; j <= 2*i; j++){
            cout<<" "<<"\t";
        }
        for(int j = (n-1)/2-i ; j >= 1 ; j--){
            cout<<"*"<<"\t";
        }
        
        cout<<endl;
    }
    for(int i =  (n+1)/2 + 1 ; i <= n-1 ; i++){
        for(int j = 1 ; j<= i - (n+1)/2 + 1 ; j++  ){
            cout<<"*"<<"\t";
        }
        for(int j =  2*(n - i) - 2 ; j>= 0 ; j--){
            cout<<" "<<"\t";
        }
         for(int j = 1 ; j<= i - (n+1)/2 + 1 ; j++  ){
            cout<<"*"<<"\t";
        }
        cout<<endl;


    }

     for(int i = 1 ; i<= n ; i++){
        cout<<"*"<<"\t";
    }
    
}