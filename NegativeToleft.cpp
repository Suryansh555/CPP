#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << " Enter Array Size - ";
    int size ;
    cin >> size;
    int *arr = new int[size];
    cout << " Enter Array Elements - \n";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    int left = 0 ;
    int right = size-1;
    while(left <= right){
        
        if(arr[left] < 0 && arr[right] < 0){
            left = left + 1 ;
        }
        else if(arr[left] > 0 && arr[right] < 0){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left = left + 1 ;
            right = right - 1 ;
        }
        else if(arr[left] > 0 && arr[right] > 0){
            right = right - 1 ; 
        }
        else{
            left = left + 1; 
            right = right - 1 ;
        }
    }
    cout << "New Array is :- \n";
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
}