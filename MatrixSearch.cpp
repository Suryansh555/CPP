#include<bits/stdc++.h>
using namespace std;
int searchMatrix(vector<vector<int> > &A, int B) {
    int R = A.size();
    int C = A[0].size();
    int left = 0 ;
    int right = R*C - 1 ;
    int found = 0 ; 
    while(left <= right){
        int mid = left + (right - left)/2 ;
        int Rindex = mid / C;
        int Cindex = mid % C ;
        int val = A[Rindex][Cindex];
        if(B == val){
            found = 1 ;
            break ;
        }
        else if(B > val){
            left = mid + 1 ;
        }
        else
            right = mid - 1 ;
    }
    return found ;
}
