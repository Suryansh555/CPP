#include <iostream>
using namespace std;
int main () {
    int H,B,Area;
	cin>>B>>H;
	if(0<B<1000 & 0<H<1000){
		Area = (H*B)/2;
		cout<<Area;
      }
	return 0;
}