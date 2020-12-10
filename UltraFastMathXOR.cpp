#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string st,st2;
        cin >> st;
		cin >> st2;
        //cout<<strlen(st)<<endl;
       for(int i=0;i<st.size();i++)
        {
            cout<<(st[i]^st2[i]);
            

        } 
        cout<<endl;
        t--;

    }
    return 0;
}