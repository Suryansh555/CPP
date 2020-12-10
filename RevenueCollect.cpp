#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int a,b;
        cin >> a;
        int arr[a];
        for(int i = 0; i < a; i++){
            cin >> arr[i];
        }
        cin >> b;
        
        
        while(b--){
            int sum = 0;
            int c,d;
            cin >> c >>d;
            
            for(int j = c-1 ; j < d ; j++ ){
                sum = sum + arr[j];
            }
            cout<<sum<<endl;
            
        }
        
        
    }
	return 0;
}
