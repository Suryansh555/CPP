#include <iostream.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  
  for(int i = 1 ; i<= N ; i ++){
      int no = 1 ;
    for(int j = 1 ; j <= i ; j++ ){
         cout << no;
         no = no + 1 ; 
    }
    for(int z = 1 ; z <= N - i ;z++ ){
        cout<<"*";
    }
    cout << endl;

  }


    return 0 ;
}