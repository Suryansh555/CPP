#include <iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    if(1 <= N <= 100){
        int num = 1 ;
        while (num < N+1){
            int col = 0;
            while(col < num ){
                 cout<<"*";
                col = col + 1;
            }
            cout<<endl;
          num = num + 1; 
        }
    }
}