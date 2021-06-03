#include<bits/stdc++.h>
using namespace std ;

int searchMatrix(vector<vector<int> > &A, int B) {
    int start = 0 ; 
    int row = A.size();
    int col = A[0].size();
    int end = (row * col) - 1 ;
    while(start <=  end){
        int mid = (start + end)/2;
        int i = mid / col ; 
        int j = mid % col ; 
        if(A[i][j] == B){
            return 1 ;
        }
        else if (A[i][j] < B){
            start = mid + 1 ;
        }
        else {
            end = mid - 1 ;
        }
    }
    return 0 ;
}
