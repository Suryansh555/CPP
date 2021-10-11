#include<bits/stdc++.h>
using namespace std ;

int main(){
    // Declare and Initialise 
    int arr[3] = {1,2,3};
    // For Average and Sum 
    int sum = 0 ;
    float avg = 0 ;
    int count = 3 ;
    for(int i = 0 ; i < 3 ; i++){
        // accesssing element
        sum += arr[i];
    }
    avg = (float)sum / (float)count ;
    cout << "Sum of Array = " << sum << " Average of Array = " << avg ;
     

}