// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





//User function Template for C++
bool isPrime(int n){
    int limit = (int)sqrt(n);

for(int i = 2; i <= limit; i++){

if(n % i == 0){
return false;
}
}
return true;
}

int exactly3Divisors(int N)
{
   int count = 1;
   if(N <= 3){
        return 0;
    }
    for(int i = 3; i <= sqrt(N); i++ ){

    if(isPrime(i) && (i * i) <= N){
    count++;
    }
    }
    return count;
    }
    
    


// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        
        //calling function exactly3Divisors()
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends