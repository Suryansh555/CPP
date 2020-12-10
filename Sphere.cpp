#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main () {
	double R,res;
	double pie = 3.14;
	cin>>R;
	if(0<R<1000){
		res = 4 * (pie*pow(R,3))/3;
		cout<<fixed<<setprecision(2)<<res;
	}
	
	return 0;


}