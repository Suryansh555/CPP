#include <iostream.h>
using namespace std;
int main(){
 int sum = 0 ; 
 int i;
while (sum >= 0){
    cin>>i;
    sum = sum + i; 
    if(sum < 0){
        break;
        exit;
    }
    cout<<i<<endl;
}

 }