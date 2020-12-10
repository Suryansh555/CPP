#include <iostream>
#include <cmath>
using namespace std;
void TowerofHanoi(int n ,int source , int destination , int auxillary , int count = 0){
    
    if(n == 1){
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;;
        return;
    }
    
    
    TowerofHanoi(n-1,source,auxillary,destination,count);
    cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
    
    TowerofHanoi(n-1,auxillary,destination,source,count);
    
   
}

int main() {
	int n ;
	cin >> n;
	while(n!=0){
	    int a;
	    cin>>a;
	    TowerofHanoi(a,1,3,2);
	    cout<<pow(2,a)-1<<endl;
	    n--;
	    
	}
	return 0;
}