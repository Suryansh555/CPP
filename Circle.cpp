#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main () {
	float D,circumference,area;
	float pie = 3.14;
	cin>>D;
	if(0<D<1000){
       circumference = pie*D;
	   area = (pie * pow(D,2)/4);
       cout << fixed << setprecision(2) << circumference << endl << fixed << setprecision(2) << area ;
	}
	return 0;
}