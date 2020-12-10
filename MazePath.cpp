#include<iostream>
using namespace std;
void mazepath(int cr , int cc , int er , int ec , string ans){

    if(cr == er && cc == ec ){
      cout<<ans<<endl;
      return ;
    }
    if(cr > er || cc > ec){
        return;
    }


    mazepath(cr + 1 , cc , er , ec , ans + "V");
    mazepath(cr  , cc + 1 , er , ec , ans + "H");
    mazepath(cr + 1 , cc + 1 , er ,ec ,ans + "D");
}

int main(){
    mazepath(0,0,2,2,"");
    return 0 ;
}