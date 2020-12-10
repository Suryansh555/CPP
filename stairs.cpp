#include<iostream>
using namespace std;
void Stairs(int curr,int n,string ans){
    if(curr == n){
        cout<<ans<<endl;
        return;
    }
    if(curr > n){
        return;
    }

    Stairs(curr+1,n,ans + "1");
    Stairs(curr+2,n,ans + "2");
    Stairs(curr+3,n,ans + "3");
    
}
int main(){
    int a ;
    cin >> a;
    Stairs(0,a,"");
}