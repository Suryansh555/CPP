#include <iostream>
using namespace std;
int main(){
	
		int a,b ;
		cin >> a >> b;
		int k = b ;
		for(int i = 0 ; i< a ; i++){
			int c ;
			cin >> c ;
			if(c < k){
				k = c ;
			}
		}
		cout<<b-k<<endl;
		
	
}