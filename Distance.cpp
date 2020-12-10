#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main () {
	float x1,x2,y1,y2,result;
	std::cin>>x1>>x2>>y1>>y2;
if(-100<x1<100 && -100<x2<100 && -100<y1<100 && -100<y2<100){
   result = sqrt(pow(y2-y1,2) + pow(x2-x1,2) );
   std::cout<< std::fixed << std::setprecision(2)<<result;
}
	return 0;
}