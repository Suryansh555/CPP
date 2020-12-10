#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    float a,b;
	    cin >> a >> b;
	    if(a >= b){
	        cout<<"Yes"<<'\n';
	    }
	    else{
	        cout<<"No"<<'\n';
	    }
	}
	return 0;
}
