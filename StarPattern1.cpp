#include <iostream>
using namespace std;
int main() {
    int N ;
    cin>>N;
    int num = 1;
    int row , column;
    while(num <= N ){
        row = N - num ;
        column = num;
       while(row > 0){
           cout<<"  ";
           row = row - 1;
       }
       while(column > 0){
         cout<<"*";
         cout<<" ";
         column = column - 1;
       }
       cout<<endl;
       num = num + 1;
       
    }
}