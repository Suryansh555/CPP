#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string a,b;
	    cin >> a>>b;
	    int answer = 0 ;
	    for(int i = 0 ; i < a.length() ; i+=2){
	        if(a[i] != b[i]){
	            while(i<=a.length() && b[i]!=a[i]){
	                i = i + 2 ;
	            }
	            answer++;
	        }
	    }
	    for(int i = 1 ; i < a.length() ; i+=2){
	        	 if(a[i] != b[i]){
	            while(i<=a.length() && b[i]!=a[i]){
	                i = i + 2 ;
	            }
	            answer++;
	        }
	    }
	    cout<<answer<<endl;
	}
	return 0;
}
