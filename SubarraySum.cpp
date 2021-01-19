#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum[25];
    int res = 0;
    int arr[] = {3,2,2,3,4,5,6,7,3,3,2,4,5,5,6};
    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++ ){
        res = res + arr[i];
        sum[i] = res;
    }
    // NOW for Queries just do this
    int start = 2 ;
    int end = 4 ;
    return sum[end] - sum[start - 1];



    return 0 ;
}