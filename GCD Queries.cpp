#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        int n,queries;
        cin>>n>>queries;
        int input[n],forwardGcd[n],reverseGcd[n];
        //Taking Input and Calculating cumulative GCD in Forward Direction
        for(int i=0;i<n;i++)
        {
            cin>>input[i];
            if(!i)
            {
                forwardGcd[i]=input[i];
            }
            else
            {
                forwardGcd[i]=gcd(input[i],forwardGcd[i-1]);
            }
        }
        //Calculationg cumulative GCD in Reverse Direction
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                reverseGcd[i]=input[i];
            }
            else
            {
                reverseGcd[i]=gcd(input[i],reverseGcd[i+1]);
            }
        }
        while(queries--)
        {
            int x,y;
            cin>>x>>y;
            x--;//Since 1 based indexing
            y--;
            if(x==0)
            {
                cout<<reverseGcd[y+1]<<'\n';
                continue;
            }
            else
            {
                if(y==n-1)
                {
                    cout<<forwardGcd[x-1]<<'\n';
                    continue;
                }
                else
                {
                    cout<<gcd(forwardGcd[x-1],reverseGcd[y+1])<<'\n';
                }
            }
        }
    }
    return 0;
}