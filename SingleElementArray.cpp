
#include<bits/stdc++.h>
using namespace std;
int search(vector<int> arr)
{
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
    int mid = (low + high) / 2;
    if (low == high) {
        return arr[low];
    }
    if (mid % 2 == 0) {
        if (arr[mid] == arr[mid + 1])
            low = mid + 2;
        else
            high = mid ;
    }
    else {
        if (arr[mid] == arr[mid - 1])
           low = mid + 1;
        else
            high = mid - 1;
    }
 }
 return -1;
}
int Solution(vector<int> &A) {
    return search(A);
    
}
