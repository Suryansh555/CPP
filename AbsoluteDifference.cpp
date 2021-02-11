#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,10,5,4,11,25};
    int size = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> heap ;
    for(int i = 0 ; i < size ; i++){
        heap.push(arr[i]);
    }
    while(heap.size() != 1){
        int max1 = heap.top();
        heap.pop();
        int max2 = heap.top();
        heap.pop();
        int difference = abs(max1 - max2);
        heap.push(difference);
    }
    cout << heap.top();
}