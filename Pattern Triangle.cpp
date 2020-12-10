#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int col = 1;
    int space ;
    int no  ;
    int mid = 1;
    if(0 < N < 10){
        
        while(col <= N){
            no = col;
            space = N - col;
               while(space > 0){
                   cout<<" "<<"\t";
                   space = space - 1;
               }
               while(no <= mid){
                    cout<<no<<" "<<"\t";
                    no = no + 1;
               }
               int mid1 = mid-1;
               while(mid1 >= col){
                   cout<< mid1 <<" "<<"\t";
                   mid1 = mid1 - 1 ;
               }
               cout<<endl;

               
            mid = mid + 2;
            col = col + 1 ;
        }
    }
    return 0 ;
}
