// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

long long sumUnderModulo(long long a,long long b)
{
   long long  c = a % 1000000007;
   long long  d = b % 1000000007;
   long long  res = c + d ;
   if(res > 1000000007){
       res = res % 1000000007 ;
    }
    return res ;
}

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends