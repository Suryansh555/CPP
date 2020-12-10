#include <bits/stdc++.h>
using namespace std;

/*
5 4 3
8
10

*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        int gaso=v[0],dist=0;
        for(int i=2;i<=n;i++){
            if(gaso>0)  dist++;
            else        break;
            gaso+=(v[i-1]-1);
        }
        cout<<dist+gaso<<endl;  
    }
    return 0;
}