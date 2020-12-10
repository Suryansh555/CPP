#include<bits/stdc++.h>
using namespace std;
int func(int A[],int a,int n,int cow)
{
    int pos = A[0];
    int c=1;
    for(int i=1;i<n;++i)
    {
        if(A[i]-pos>=a)
        {pos = A[i]; c++;
         if(c==cow) return 1;}
    }
    return 0;
}
int main()
{ int n,s,*A;
  cin>>n>>s;
  A = new int[n];
  for(int i=0;i<n;++i)
   cin>>A[i];
  sort(A,A+n);
  int l=0,r=A[n-1],mid,m=-1;
  while(r>l)
  {
      mid = (r+l)/2;
      if(func(A,mid,n,s))
      {
          if(mid>m)
            m = mid;
          l = mid+1;
      }
      else
        r=mid;
  }
  cout<<m<<endl;
  return 0;
}
