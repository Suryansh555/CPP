#include <bits/stdc++.h> 
using namespace std; 
  
int merge(int arr[], int temp[], 
          int l, int m, int r, int K) 
{  
    int i = l; 
    int j = m + 1; 
    int cnt = 0; 
  
    for (int l = 0; i <= m; i++) { 
        bool found = false; 

        while (j <= r) { 

            if (arr[i] >= K * arr[j]) { 
                found = true; 
            } 
            else
                break; 
            j++; 
        } 
        if (found) { 
            cnt += j - (m + 1); 
            j--; 
        } 
    } 

    int k = l; 
    i = l; 
    j = m + 1; 
  
    while (i <= m && j <= r) { 
  
        if (arr[i] <= arr[j]) 
            temp[k++] = arr[i++]; 
        else
            temp[k++] = arr[j++]; 
    } 
  
    while (i <= m) 
        temp[k++] = arr[i++]; 
    while (j <= r) 
        temp[k++] = arr[j++]; 
  
    for (int i = l; i <= r; i++) 
        arr[i] = temp[i]; 
    return cnt; 
} 
  

int mergeSortUtil(int arr[], int temp[], 
                  int l, int r, int K) 
{ 
    int cnt = 0; 
    if (l < r) { 
  
        int m = (l + r) / 2; 
  
        cnt += mergeSortUtil(arr, temp, 
                             l, m, K); 
        cnt += mergeSortUtil(arr, temp, 
                             m + 1, r, K); 
        cnt += merge(arr, temp, l, 
                     m, r, K); 
    } 
  
    return cnt; 
} 
  
int mergeSort(int arr[], int N, int K) 
{ 
    int temp[N]; 
  
    cout << mergeSortUtil(arr, temp, 0, 
                          N - 1, K); 
} 
  

int main() 
{ 
    int arr[] = { 5, 6, 2, 5 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
    int K = 2; 
    mergeSort(arr, N, K); 
  
    return 0; 
} 