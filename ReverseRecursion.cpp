#include<iostream>

using namespace std;

void Reverse(string name){
    if(name.size() == 0){
        return ;
    }
    Reverse(name.substr(1));
    cout << name[0];
    
}

int main()  {
    string name;
    cin >> name;
    Reverse(name);
    
    
    return 0;
}