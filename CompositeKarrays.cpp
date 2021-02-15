#include<bits/stdc++.h>
using namespace std;

vector<bool> SieveOfEratosthenes(int max_val) 
{ 
    vector<bool> prime(max_val + 1, true); 
    for (int p = 2; p * p <= max_val; p++) { 
        if (prime[p] == true) { 
            for (int i = p * 2; i <= max_val; i += p) 
                prime[i] = false; 
        } 
    } 
    return prime; 
} 
void compositeSumAndProduct(int arr[], int n, int k) 
{ 
    int max_val = *max_element(arr, arr + n); 
    vector<bool> prime = SieveOfEratosthenes(max_val); 
    prime[0] = true; 
    prime[1] = true; 

    priority_queue<int> maxHeap; 
    priority_queue<int, vector<int>, greater<int>> minHeap; 
  
    for (int i = 0; i < n; i++) 
        if (!prime[arr[i]]) { 
            minHeap.push(arr[i]); 
            maxHeap.push(arr[i]); 
        } 
    long long int minProduct = 1 , maxProduct = 1 , minSum = 0 , maxSum = 0; 
    while (k--) { 
        minProduct *= minHeap.top(); 
        maxProduct *= maxHeap.top(); 
        minSum += minHeap.top(); 
        maxSum += maxHeap.top(); 
        minHeap.pop(); 
        maxHeap.pop(); 
    } 
    cout << "Sum of k-minimum composite numbers is " << minSum << "\n"; 
    cout << "Sum of k-maximum composite numbers is " << maxSum << "\n"; 
    cout << "Product of k-minimum composite numbers is " << minProduct << "\n"; 
    cout << "Product of k-maximum composite numbers is " << maxProduct; 
}

int main(){
    int arr[] = {2,5,6,8,10,11} ;
    int k = 2 ;
    int n = sizeof(arr)/sizeof(arr[0]);
    compositeSumAndProduct(arr,n,k);
    return 0 ;
}