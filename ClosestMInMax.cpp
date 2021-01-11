#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &A) {
    int size = A.size();
    int max = INT_MIN;
    int min = INT_MAX;
    int near ;
    int correct = INT_MAX;
    int min_index = INT_MIN;
    int max_index = INT_MAX ;
    for(int i = 0 ; i < size ; i++){
        if(A[i] > max){
            max = A[i];
            max_index = i;
        }
        if(A[i] < min){
            min = A[i];
            min_index = i;
        }
    }

    for(int i = 0 ; i < size ; i++){
        if(A[i] == max){
            max_index = i;
        }
        if(A[i] == min){
            min_index = i;
        }
        near = abs(min_index - max_index) + 1;
        if(near < correct){
            correct = near;
        }
    }
    return correct ;
}
