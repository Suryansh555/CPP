#include<bits/stdc++.h>
using namespace std;
int main(){
    string A = "I have a red ball";
    string B = "I have a blue ball";
    string arr  = A + " " + B ;
    int size = arr.size();
    map<string,int> m1 ;
    string word = "";
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == ' '){
            m1[word]++;
            word = "";
        }
        else{
            word = word + arr[i];
        }

    }
    m1[word]++;
    cout << "Words Which are different in both sentence is :- { ";
    for(auto itr = m1.begin() ; itr != m1.end() ; itr++ ){
        auto itr1 = itr ;
        itr1++; 
        if(itr->second == 1 &&  itr1 != m1.end()){
            cout << itr->first << " , " ;
        }
        if(itr1 == m1.end()){
            cout << itr->first <<   " }" ;
        }
    }
    



    return 0 ;
}