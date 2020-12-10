#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int num ;
    for(int i = 0 ; i<n ; i++){
        int a ;
        cin >> a;
        int j = 2 ;
        if(a == 1){
            break;
        }
        else if (a == 2){
            j = 3 ;
            break;
        }
        else if (a == 3){
            j = 5;
            break;
        }
        else if ( a== 4){
            j = 7 ;
            break;
        }

        a = a - 4 ; 
        while(a!=0){
             if (n % 2 == 0 || n % 3 == 0) {
              j = j + 1;
              continue;
             }
        for (int i = 5; i * i <= n; i = i + 6){
        if (n % i != 0 || n % (i + 2) != 0) 
            a = a - 1 ;
          }
        

        
        }
        cout<<j<<endl; 
    }
     
    }
