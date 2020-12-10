#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for(int i = 0 ; i < n; i++){
        int a ;
        cin>>a;
        int size = 1000;
        int fact[size];
        int carry; 
        int j = size - 1;
        fact[j] = 1;
        while(a > 1){
            int x ;
        for(int k =size - 1 ; k >= j ; k--){   //{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.....,0,0,0,1}
              x  = fact[k] * a + carry; 
              fact[k] = x % 10 ;
              carry = x / 10 ;
        }
        while(carry > 0){
            fact[--j] = carry % 10 ;
            carry/=10;
        }
        a--;
        }
        for(int z = j ; z < size ;z++ ){
            cout<<fact[z];
        }
        cout<<endl;
        
        
        
    }    

        
    
}