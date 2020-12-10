#include<iostream.h>
using namespace std; 

int main(){
int n ;
cin >> n ;
for(int row = 1; row <= n ; row  = row + 1){
    for(int space = 1 ; space <= n - row ; space = space + 1){
        cout <<" ";

    }
    for(int stars = 1 ; stars <= 2*row - 1 ; stars = stars + 1){
        cout<<'*';
        
    }
    cout << endl;
}
for(int row = 1 ; row <= n-1 ; row = row + 1){
    for ( int space  =1 ; space <= row ; space = space + 1){
        cout<<" ";
    }
    for( int stars = 1 ; stars = 2*(n-row)-1; stars = stars + 1){
     cout<<'*';
    }
    cout<<endl;
}
}