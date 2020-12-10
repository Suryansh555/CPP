// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

        
    
	int rowWithMax1s(vector<vector<int> > mat, int R, int C) {
	int j = C-1;
    int max_row_index = 0; 
  
    // The function first() returns index of first 1 in row 0. 
    // Use this index to initialize the index of leftmost 1 seen so far 

  
    for (int i = 0; i < R; i++) 
    { 
        // Move left until a 0 is found 
        while (j >= 0 && mat[i][j] == 1) 
        { 
           j = j-1;  // Update the index of leftmost 1 seen so far 
           max_row_index = i;  // Update max_row_index 
        } 
    }
    if(j == 0 && C == 1){
        return -1;
    }
    return max_row_index; 
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends