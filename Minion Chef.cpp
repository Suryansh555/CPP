#include<bits/stdc++.h>
using namespace std;

#define N 100005

long long ar[N];
long long h;
long long n;

bool fun(long long x)
{
  long long ans=0;
    
    
    for(int i=0;i<n;i++)
    {
        ans=ans+(ar[i]+x-1)/x;
    }
    
    
    return ans<=h;
    
    
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    
    cin>>t;
    
     while(t--)
     {
         cin>>n;
         
         cin>>h;
         
         
         long long high=0;
         
         long long mi=1;
         
         for(int i=0;i<n;i++)
         {
             cin>>ar[i];
             high+=ar[i];
         }
         
         
         long long ans=0;
         
         while(mi<=high)
         {
             long long mid=(mi+high)/2;
             //cout<<mid<<endl;
             
             //cout<<mid<<endl;
             
             //cout<<fun(mid)<<endl;
             if(fun(mid))
             {
                 ans=mid;
                 high=mid-1;
             }
             
             else
                 mi=mid+1;
         }
         
         cout<<ans<<endl;
         
         
                  
     }
}