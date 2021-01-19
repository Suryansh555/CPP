#include<bits/stdc++.h>
using namespace std;

int Solution(vector<vector<int> > &A) {
    int R =A.size();
    int C =A[0].size();
    
    int j = C-1;
    int max_row_index = 0 ;
    for(j = 0 ; j < C-1 ; j++){
        if(A[0][j] == 1){
            break;
        }
    }
    j--;
    
        for (int i = 1; i < R; i++) 
    { 
        // Move left until a 0 is found 
        while (j >= 0 && A[i][j] == 1) 
        { 
           j = j-1;  // Update the index of leftmost 1 seen so far 
           max_row_index = i;  // Update max_row_index 
        } 
    } 
    return max_row_index;
}
