#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;

int func(int arr[], int n){
  sort(arr, arr + n);
  int cost = 0;
  for(int i=n-1;i>=0;i--){
    cost += ((arr[i]%mod)*((n-i)%mod))%mod;
  }
  return cost;
}

int main(){
    int a[100009], n;
    cin >> n;
    for(int i=0;i<n;i++)
      cin >> a[i];

      cout << func(a, n) << endl;
    return 0;
}
