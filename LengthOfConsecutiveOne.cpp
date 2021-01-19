#include<bits/stdc++.h>
using namespace std;
int solve(string s) {
    int n = s.size();
     int cnt_one = 0; 
      
    int max_cnt = 0, temp=0; 
  
    for (int i = 0; i < n; i++) 
    { 
        if (s[i] == '1') 
        { 
            cnt_one++; 
            temp++; 
        } 
        else
        { 
            max_cnt = max(temp,max_cnt); 
            temp=0; 
        } 
    } 
      
    max_cnt = max(max_cnt, temp); 
  
    // To store cumulative 1's 
    int left[n], right[n]; 
  
    if (s[0] == '1') 
        left[0] = 1; 
    else
        left[0] = 0; 
  
    if (s[n - 1] == '1') 
        right[n - 1] = 1; 
    else
        right[n - 1] = 0; 
  
    // Counting cumulative 1's from left 
    for (int i = 1; i < n; i++) { 
        if (s[i] == '1') 
            left[i] = left[i - 1] + 1; 
  
        // If 0 then start new cumulative 
        // one from that i 
        else
            left[i] = 0; 
    } 
  
    for (int i = n - 2; i >= 0; i--) { 
        if (s[i] == '1') 
            right[i] = right[i + 1] + 1; 
  
        else
            right[i] = 0; 
    } 
  
  
    for (int i = 1; i < n - 1; i++) { 
        // perform step 3 of the approach 
        if (s[i] == '0') { 
  
            // step 3 
            int sum = left[i - 1] + right[i + 1]; 
  
            if (sum < cnt_one) 
                max_cnt = max(max_cnt, sum+1); 
  
            else
                max_cnt = max(max_cnt, sum); 
  
        } 
    } 
  
    return max_cnt;
}
