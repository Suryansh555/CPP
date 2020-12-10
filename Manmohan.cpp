#include <iostream.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    if(N<=1000){
        cout<<1<<endl;
        for(int i = 1 ; i <= N - 1 ; i++){
          cout<<i;
          for(int j = 1 ; j < i ; j++){
              cout<<0;
          }
          cout<<i<<endl;

        }
    }
    return 0 ;
}