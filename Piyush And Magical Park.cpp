#include<iostream>
using namespace std ;
int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	char obs ;
	for(int i = 0 ; i<a ; i++){
        for(int j = 0 ; j<b-1; j++){
		 	cin >> obs ;
			 if(obs == '.'){
				 d = d - 2 ;
				 d = d - 1 ;
			 }
			 else if(obs =='*'){
				 d = d + 5  ;
				 d = d - 1 ;
			 }
			 else if(obs == '#'){
				break;
			 }
			 
			 
		}
		for(int j = 0 ; j<1; j++){
		 	cin >> obs ;
			 if(obs == '.'){
				 d = d - 2 ;
				 
			 }
			 else if(obs =='*'){
				 d = d + 5  ;
				
			 }
			 else if(obs == '#'){
				break;
			 }
			 
			
		}
		
	}
	if(d >= c){
		cout<<"Yes"<<endl<<d;
	}
	else{
		cout<<"No";
	}
		
	
	
}