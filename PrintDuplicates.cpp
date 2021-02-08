#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "It was the best of times, it was the worst of times, it was the age of wisdom, it was the age of foolishness, it was the epoch of belief, it was the epoch of incredulity, it was the season of Light, it was the season of Darkness, it was the spring of hope, it was the winter of despair" ;
    int size = a.size();
    string word = "";
    map<string,int> m1 ;
    for(int i = 0 ; i < size ; i++){
        if(a[i] == ' '){
            m1[word]++;
            word = "";
        }
        else{
            word = word + a[i];
        }
    }
    cout << "Printing Duplcates :- ";
    for(auto itr = m1.begin() ; itr != m1.end() ; itr++){
        if(itr->second > 1){
            cout << itr->first << " ";
        }
    }
    


    return 0 ;
}