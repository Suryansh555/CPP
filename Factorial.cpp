#include <iostream>
using namespace std;
long long  int Factorial(int n) {
    if (n>=1)
        return n*Factorial(n-1);
    else
        return 1;
}


int main() {
	int n ;
	cin >> n;
	while(n!=0){
	    int a ;
	    cin >> a ;
	    cout<<Factorial(a)<<endl;
	    n--;
	}
	return 0;
}
