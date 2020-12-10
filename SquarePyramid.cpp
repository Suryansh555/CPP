#include<iostream>
#include <cmath>
using namespace std;
int main () {
    int n ;
    cin >> n;
    for ( int i = 1 ; i <= n ; i = i + 1 ){
        for(int j = 1 ; j <= i ; j = j +1){
            cout<< pow(j,2) << " ";
        }
        cout << endl;
    }
	return 0;
}