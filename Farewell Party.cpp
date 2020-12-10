#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long int a,b,c,d;
	    cin >> a >> b >> c >> d ;
	    int ballon = 0 ;
	    long long int one = (a * b) + c ;
	    long long int count = d % one ;
	    
	    if(d > one){
	        
	        if(count <= (a * b)){
	             ballon = ballon + count/a ;
	        }
	        else{
	            ballon = ballon + a*b;
	        }
	        ballon = ballon + b*(d / one) ;
	    }
	    else{
	        if(count <= (a * b)){
	             ballon = ballon + count/a ;
	        }
	        else{
	            ballon = ballon + a*b;
	        }
	    }
	    cout << ballon << endl;
	    
	}
	return 0;
}
