#include <iostream>
using namespace std;

int main() {
	int n ;
	cin >> n ;
	long long int result;
	
	while(n!= 0){
	    long long int a ;
	    cin >> a;
	    long long int start = 0 ;
	   long long int last = a;
	    while(start<=last){
	        long long int mid = start + (last-start)/2;
	        long long int no = (mid * (mid+1))/2;
	        if(no == a){
	            result = mid;
	            break;
	        }
	        if(no < a){
	            start = mid + 1;
	            result = mid;
	             
	        }
	        if(no > a){
	            last = mid - 1 ;
	        }
	        
	        
	    }
	    cout<<result<<endl;
	    n--;
	}
	return 0;
}
