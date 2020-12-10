#include <iostream>
using namespace std;
void validparenthesis(int num , int open = 0, int close = 0,string ans = ""){
    if(open == num && close  == num)
{
    cout<<ans<<endl;
    return;
}
if(open > num || close > open){
    return;
}
 
 validparenthesis( num , open + 1 , close , ans + "{");
 validparenthesis( num , open , close + 1 , ans + "}");
}

int main(){
    validparenthesis(2);
    return 0 ;
}
