#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int> > &A) {
int H = A.size();
int W = A.size();

bool first_row = false ;   // First Row Zero Checking
for(int col = 0 ; col < W ; col++){
    if(A[0][col] == 0){
        first_row = true;
    }
}

for(int row = 0 ; row < H ; row++){
    for(int col = 0 ; col < W ; col++){
        if(A[row][col] == 0 ){
            A[0][col] = 0 ;
        }
    }
}

for(int row = 1 ; row < H ; row++ ){
    bool zero = false ;
    for(int col = 0 ; col < W ; col++){
            if(A[row][col] == 0){
                zero = true;
            }
    }
    for(int col = 0 ; col < W ; col++){
        if(zero || A[0][col] == 0){
            A[row][col] = 0 ;
        }
    }
}

if(first_row){
    for(int col = 0 ; col < W ;col++){
        A[0][col] = 0;
    }
}

}
