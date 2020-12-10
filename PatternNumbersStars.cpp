#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    for (int i = 1 ; i <= n ; i = i + 1){
        int num = 1 ;
        for(int j = 1 ; j <= i; j = j +1){
            cout<<num;
            num = num + 1;

        }
        for(int z =1 ; z <= n -i ; z = z + 1){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}