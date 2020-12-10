#include<iostream>
using namespace std;
int main() {
	int i,n;
	cin>>n;
	if(n%2==0)
	{for(i=n-1;i>0;i-=2)
	cout<<i<<endl;
	for(i=2;i<=n;i+=2)
	cout<<i<<endl;
	}
	else{
		for(i=n;i>0;i-=2)
		cout<<i<<endl;
		for(i=2;i<n;i+=2)
		cout<<i<<endl;
	}
	return 0;
}