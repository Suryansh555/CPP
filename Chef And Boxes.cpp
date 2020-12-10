#include <bits/stdc++.h>
using namespace std;

#define ll  long long

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n],ar[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            ar[i]=arr[i];
        }

        sort(ar,ar+n);

        int i,j;

        for(i=0;i<n;i++)
        {
            if(arr[i]!=ar[i])
            {
                break;
            }
        }

        for(j=n-1;j>=i;j--)
        {
            if(arr[j]!=ar[j])
            {
                break;
            }
        }

        //cout<<i<<" "<<j<<endl;

        if(i<j)
            cout<<j-i+1<<endl;
        else
            cout<<0<<endl;
    }
}
