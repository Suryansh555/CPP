#include<bits/stdc++.h>
using namespace std;
int main(){
int t;    
cin >> t;
while(t--){
int num ;
cin >> num ;
if(num > 45){
    cout<<-1<<endl;
}
else{
int current  = 9 ;
string str = "";

while(num > current){
    str = (char)(current) + str;
    num = num - current;
    current --;
}
if(num > 0){
    str = (char)num + str;
}
cout << str << endl;
}

}



    return 0 ;
}