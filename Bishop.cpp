#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return the count of 
// total positions the Bishop 
// can visit in a single move 
int countSquares(int row, int column) 
{ 
  
    // Count top left squares 
    int topLeft = min(row, column) - 1; 
  
    // Count bottom right squares 
    int bottomRight = 8 - max(row, column); 
  
    // Count top right squares 
    int topRight = min(row, 9 - column) - 1; 
  
    // Count bottom left squares 
    int bottomLeft = 8 - max(row, 9 - column); 
  
    // Return total count 
    return (topLeft + topRight + bottomRight + bottomLeft); 
} 
  
// Driver code 
int main() 
{ 
  
    // Bishop's Position 
    int row = 4, column = 4; 
  
    cout << countSquares(row, column); 
  
    return 0; 
} 