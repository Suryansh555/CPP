#include<iostream.h>
using namespace std ;

int main(){
    int n; 
    cout << "Enter the value of n " << endl;
    cin >> n ;
    int sum = 0 ; 
    int avg ; 
    int val ;
    for(int i = 0; i < n ; i++){
        cout << "Enter the value of " << i+1 << " element :";
        cin >> val ; 
        sum = sum + val ;  
    }
    avg = sum / n ; 
    cout << "The sum is " << sum << endl;
    cout << "The average is " << avg << endl;
}