#include <iostream>
using namespace std;
int main() {
    int N;
    int i = 2;
    cin>>N;

    if(2 < N <= 1000000000){
        while(i < N/2){
            if(N%i == 0){
                cout<<"Not Prime";
                return 0;
            }
            i = i + 1;


        }
    }
    cout<<"Prime";
    return 0 ;
}