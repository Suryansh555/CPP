#include<bits/stdc++.h>
using namespace std;
bool checker(string str1, string str2, int m, int n) 
{ 
   int j = 0; 
   for (int i=0; i<n&&j<m; i++) 
       if (str1[j] == str2[i]) 
         j++; 
   return (j==m); 
} 
int solve(string A, string B) {
    int m = A.size();
    int n = B.size();
    int ans = checker(A,B,m,n);
    return ans;
}
