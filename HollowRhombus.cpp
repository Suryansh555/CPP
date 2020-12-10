#include<iostream>
using namespace std;
int main() {
    int n ; 
    cin >> n; 
    for ( int i  = 1 ; i  <= n ; i = i +1 ){
        for(int j = 1 ;  j <= n - i ; j = j+1){
            cout<<" ";
        }
        if(i!= 1 &&  i!= n){
        cout<<"*";
        for(int a = 1 ; a <= n - 2; a = a + 1){
            cout<<" ";
        }
        cout<<"*"<<endl;
        }
        else{
            for(int z = 1 ; z <= n ; z  = z + 1 ){
                cout<<"*";
            }
            cout<<endl;
        }

    }
	return 0;
}