#include <bits/stdc++.h>
using namespace std;
int countElements(int a[], int n) 
{
    int cnt[n + 1] = {0};
    int ans = 0; 
    for(int i = 0; i < n; i++) 
    { 
        ++cnt[a[i]]; 
    } 
    for(int l = 0; l < n; ++l) 
    { 
        int sum = 0; 
  
        for(int r = l; r < n; ++r) 
        { 
            sum += a[r]; 
  
            if (l == r) 
                continue; 
  
            if (sum <= n) 
            {  
                ans += cnt[sum];
                cnt[sum] = 0; 
            } 
        } 
    }  
    return ans; 
} 
  

int main() 
{     int N ;
      cout << "Enter Size of Array" << endl;
      cin >> N ;
      int a[N];
      cout << "Enter " << N <<" Elements " << endl;
      for(int i = 0 ; i < N ; i++){
          cin >> a[i];
      }
      cout << "Output = " << countElements(a, N); 
} 