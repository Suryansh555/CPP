#include <iostream>
using namespace std;

int main(){
int a[] ={5,4,3,2,1};
bool swapped;
int n = sizeof(a)/sizeof(int);
for(int i = 0 ; i < n ; i++){
    cout<<a[i]<<" ";
}
cout<<endl;
for(int i = 0 ; i <= n-2 ; i++){
    swapped = false; 
    for(int j = 0 ; j<= n-2-i; j++){
        if(a[j] > a[j+1]){
            swap(a[j],a[j+1]);
            swapped = true; 
        }
    }
    if (swapped == false) 
        break; 
}
for(int i = 0 ; i < n ; i++){
    cout<<a[i]<<" ";
}

return 0 ;
}