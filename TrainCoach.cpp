#include <iostream>
using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
	   int a;
	    cin >> a;
	    long long int sum = 0;
	    long long int arr[a];
	    for(int i = 0 ; i <a ; i++){
	        cin >> arr[i];
	        sum = sum + arr[i];
	    }
	    long long int b;
	    cin >> b;
	    while(b--){
	        long long int c,d,e;
	        cin >> c >> d >> e;
	        sum = sum + ((d-c)+1)*e;
	   }
	   cout<<sum<<endl;
	}
	return 0;
}
