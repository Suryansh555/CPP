    #include <bits/stdc++.h>

    using namespace std;

    int main()

    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);    
       string s,s1;
       cin>>s;
       int t;
       cin>>t;
       while(t--)
       {
           cin>>s1;
           int count=0;
           int flag = 0;
           for(int i=0;i<s1.size();i++)
           {
               for(int j=0;j<s.size();j++)
               {
                   if(s1[i]==s[j])
                   {
                       flag = 1 ;
                       count++;
                   }
               }
               if(flag == 0)
                break;
           }
           if(count==s1.size())
           {
               cout<<"Yes"<<'\n';
           }
           else
            cout<<"No"<<'\n';
       }
      return 0;
    }