#include<bits/stdc++.h>
using namespace std;



string getcode(char c){
    switch(c){
        case '2': 
          return("abc");
         case '3' : 
          return("def");
         case '4' : 
          return("ghi");
          case '5' : 
          return("jkl");
          case '6' : 
          return("mno");
           case '7' : 
          return("pqrs");
           case '8' : 
          return("tuv");
           case '9' : 
          return("wxyz");
    }

}
void letter_combination(string ques , string ans,vector<string> code){

    if(ques.length() == 0){
        code.push_back(ans);
        return;
    }
    char ch = ques.at(0);
    string roq = ques.substr(1);
    string cod = getcode(ch);
    for(int i = 0 ; i < cod.length() ; i++){
        letter_combination(roq,ans + cod.at(i),code);
    }
}

int main(){
string abc ;
cin >> abc;
vector<string> code ;
letter_combination(abc,"" ,code);



return 0;

}
