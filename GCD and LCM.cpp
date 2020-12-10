#include <iostream>
using namespace std;

# define int long long int 
int gcd(int a , int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int32_t main(){
    int t;
    cin>>t;
    while(t!=0){
        int a,b;
        cin >> a >> b ;
        int ans1 = gcd(a,b);
        int ans2 = (a*b)/ans1;
        cout<<ans1 << " " <<ans2 <<endl;
        t--;
    }
    return 0;
    
}