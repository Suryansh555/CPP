#include<iostream>
using namespace std;
int main() {
    int n ;
    cin>> n;
    
    for(int i = 1 ; i <= (n+1)/2 ; i ++){
        
                for(int j = 1 ; j <= (n+1)/2 - i ; j++){
                    cout<<" "<<"\t";
                    }
                for(int z = 1 ; z<= 2*i - 1 ; z++ ){
                    cout<<"*"<<"\t";
                }     
               
                cout<<endl;
    }
    for ( int i  = 1 ; i <= (n+1)/2 - 1 ; i ++ ){
         for( int  space = 1 ; space <= i ; space = space + 1 ){
             cout<<" "<<"\t";

         }
         for( int stars = 1 ; stars <= 2 *(n-(n+1)/2 - i ) + 1   ; stars ++){
             cout<<"*"<<"\t";
         }
         cout<<endl;
    }
    
    
    
	return 0;
}