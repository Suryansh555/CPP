// { Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

//Complete this function
int modInverse(int a, int m)
{
    int val ;
    for(int i = 0 ; i < m ; i++){
        val = a*i;
        if(val % m == 1){
            return i ;
        }
    }
    return -1;
}

// { Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		
		//calling function modInverse()
		cout << modInverse(a, m)<<endl;
	}
    return 0;
}  // } Driver Code Ends