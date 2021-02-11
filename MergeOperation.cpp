#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 9, 10, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k = 7 ; 
    priority_queue<int,vector<int>,greater<int>> minheap ;
    for(int i = 0 ; i < size ; i++){
        minheap.push(arr[i]);
    }
    int min = minheap.top();
    while(min <= k){
        int min1 = minheap.top();
        minheap.pop();
        int min2 = minheap.top();
        minheap.pop();
        int res = min1 + 2 * min2 ;
        min = res ;
        minheap.push(res);
    }
    while(minheap.empty() != 1){
        cout << minheap.top() << endl;
        minheap.pop();
    }
    return 0 ;
}