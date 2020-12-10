#include<iostream>
using namespace std;
void AllToss(int n,string ans){
    if(n == 0){
        cout<<ans<<endl;
        return ;
    }
    AllToss(n-1,ans + "H");
    AllToss(n-1,ans + "T");

}
int main(){
    int a ;
    cin >> a;
    AllToss(a,"");
}