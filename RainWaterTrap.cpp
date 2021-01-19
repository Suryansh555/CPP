#include<iostream>
using namespace std;
int main(){
    int size ;
    cout << " Enter Array Size \n";
    cin >> size;
    int arr[size];
    cout << " Enter " << size << " elements \n";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    int result = 0;
    int lmax = 0;
    int rmax = 0 ;
    int low = 0, high = size - 1;
    while(low <= high){
        if(arr[low] < arr[high]){
            if(arr[low] > lmax)
                lmax = arr[low];
            else
                result += lmax - arr[low];   
            low++;     
        }
        else{
            if(arr[high] > rmax)
                rmax = arr[high];
            else 
                result += rmax - arr[high];
            high--;
        }
    }
 cout << "Water Trapped  = " << result;   


    return 0 ;
}