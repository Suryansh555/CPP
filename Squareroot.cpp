#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n) {
           int i = 1; 
  
    // While the square root is not found 
    bool found = false; 
    while (!found) { 
  
        // If n is a perfect square 
        if (i * i == n) {  
            found = true; 
        } 
        else if (i * i > n) { 
  
            // Square root will lie in the 
            // interval i-1 and i 
            i = i - 1 ;
            found = true; 
        } 
        i++; 
    }
    return i - 1; 
}
int main () {
        int A;
        cin >> A;
        cout << squareRoot(A);
	return 0;
}