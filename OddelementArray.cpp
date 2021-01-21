#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,1,2,3,4,2,3};
    int res = 0 ;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < size ;i++){
        res = res ^ arr[i];
    }
    cout << "ODD ELEMENT IS = " << res ; 


    return 0;
}