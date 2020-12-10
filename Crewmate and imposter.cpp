#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll ans=sqrt(n);
	    int divby3=ans/3;
	    cout<<ans-divby3<<"\n";
	}
	return 0;
}