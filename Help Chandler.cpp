#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,a,b;
	    cin >> n >> a >> b;
	    int sum_min = 1;
	    int sum_max = 1;
	    int no = 1;
	    for(int i = 1 ; i < a ; i ++){
	        no = no * 2;
	        sum_min = sum_min + no ;
	   }
	   for(int j = n - a ; j > 0 ; j--){
	       sum_min = sum_min + 1 ;
	   }
	   no = 1 ;
	   	    for(int i = 1 ; i < b ; i ++){
	        no = no * 2;
	        sum_max = sum_max + no ;
	   }
	   	   for(int j = n - b ; j > 0 ; j--){
	       sum_max = sum_max + no ;
	   }
	   
	   cout<<sum_min<<" "<<sum_max<<endl;
	   
	}
	return 0;
}
