#include<iostream>
using namespace std;
int main () {
	 int L,B,result;
	cin>>L>>B;
	 if(0<L<1000 && 0<B<1000){
		 result = 2*(L+B);
		 cout<<result;
	 }
	return 0;
}