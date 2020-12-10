#include <iostream>
using namespace std;
int main() {
    int n,res; 
    cin>>n;
    if(0 <= n <= 1000000000){
        while(n>0){
        res = n % 10;
        cout<<res;
        n = n/10;
        }
    }
}