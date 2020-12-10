#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;
        cin>>x>>y;
        if(x==y){
           
            cout<<0<<endl;
        }
        else if (x<y) {
            if(x%2==0){
                if(y%2!=0){
                    cout<<1<<endl;
                }
                else{
                    int k=(y-x)/2;
                    if(k%2==0){
                         cout<<3<<endl;
                        
                    }
                    else{
                         cout<<2<<endl;
                    }
                   
                }
                
            }
            else{
                if(y%2==0){
                    cout<<1<<endl;
                }
                else{
                    int k=(y-x)/2;
                    if(k%2==0){
                         cout<<3<<endl;
                        
                    }
                    else{
                         cout<<2<<endl;
                    }
                }
                
            }
            
        }
        else{
            //x>y
            if(x%2==0){
                if(y%2==0){
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                    
                }
                
            }
            else{
                if(y%2==0){
                    cout<<2<<endl;
                }
                else{
                    cout<<1<<endl;
                }
            }
            
        }
       
    }
	return 0;
}