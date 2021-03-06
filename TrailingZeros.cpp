#include<iostream>
using namespace std;
int findTrailingZeros(int n) 
{ 
    // Initialize result 
    int count = 0; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
  
    return count; 
} 

int main(){
    int n ;
    cin >> n; 
	cout<<findTrailingZeros(n);
	return 0 ;
}