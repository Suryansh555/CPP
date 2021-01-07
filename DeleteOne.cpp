int Solution::solve(vector<int> &a) {
    int n = size(a);
int Prefix[n + 2]; 
    int Suffix[n + 2]; 
  
    // Single state dynamic programming relation 
    // for storing gcd of first i elements 
    // from the left in Prefix[i] 
    Prefix[1] = a[0]; 
    for (int i = 2; i <= n; i += 1) { 
        Prefix[i] = __gcd(Prefix[i - 1], a[i - 1]); 
    } 
  
    // Initializing Suffix array 
    Suffix[n] = a[n - 1]; 
  
    // Single state dynamic programming relation 
    // for storing gcd of all the elements having 
    // greater than or equal to i in Suffix[i] 
    for (int i = n - 1; i >= 1; i -= 1) { 
        Suffix[i] = __gcd(Suffix[i + 1], a[i - 1]); 
    } 
  
    // If first or last element of 
    // the array has to be removed 
    int ans = max(Suffix[2], Prefix[n - 1]); 
  
    // If any other element is replaced 
    for (int i = 2; i < n; i += 1) { 
        ans = max(ans, __gcd(Prefix[i - 1], Suffix[i + 1])); 
    } 
  
    // Return the maximized gcd 
    return ans; 
} 
