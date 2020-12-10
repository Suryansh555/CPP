#include <iostream>
using namespace std;
int main() {
   int N;
   cin>>N;
   int col = 1;
   int row ;
   int cal;
   while(col <=  N){
      row = col;
    cal = N - row ;
      while(row > 0){
         cout<<col<<" ";
         row = row - 1 ;
      }
      row = col + 1;
      while(row <= N){
        cout<<row<<" ";
          row = row + 1 ;
      }
      cout<<endl;
      col = col + 1;
   }
    
   return  0 ;
}
