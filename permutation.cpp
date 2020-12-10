#include <iostream>
using namespace std ;
void Permutation(string ques ,string ans){
    if(ques.length()== 0){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0 ; i < ques.length() ; i++){
        string np = ques.substr(0,i) + ques.substr(i+1);
        Permutation(np,ans + ques.at(i));
    }
}

int main(){
    Permutation("abc","");
    return 0 ;
}