#include <bits/stdc++.h>
using namespace std;

bool palindrome(string ro){
        int i = 0;
        int j = ro.length() - 1;
        while(i < j){
            if(ro.at(i)!= ro.at(j)){
                return false;

            }
                                i++;
                    j--;
        }
        return true;
}

void palindromepartioning(string ques , string ans ,vector<string> a,vector<vector<string>> abc){
      
if(ques.length() == 0){
    abc.push_back(a);
    return;
}
for(int i = 1 ; i <= ques.length() ; i++){
    string comp = ques.substr(0,i);
    string roq = ques.substr(i);
    
    if(palindrome(comp)){
        a.push_back(comp);
        palindromepartioning(roq,ans + comp + " " ,a,abc);
    }
}

}

int main(){
    vector<vector<string>> abc ;
    vector<string> a;
    string ab ;
    cin >> ab;
palindromepartioning(ab,"",a,abc);




    return 0 ;
}
