#include<bits/stdc++.h>
using namespace std;
int main(){
    string A = "this is a big string";
    vector<string> B = {"this","is","yo","a","bigger","string","kappa"};
    unordered_map<string,int> m1 ;
    int size = A.size();
    string word = "";
    for(int i = 0 ; i < size ; i++){
        if(A[i] == ' '){
            m1[word]++;
            word = "";
        }
        else{
            word = word + A[i];
        }
    }
    m1[word]++;
    size = B.size();
    bool arr[size];
    for(int j = 0 ; j < size ; j++){
        if(m1.find(B[j]) != m1.end()){
            arr[j] = true;
        }
        else{
            arr[j] = false ;
        }
    }
    for(int z = 0 ; z < size ; z++){
        string ans = arr[z]?"True":"False" ;
        cout << ans << " ";
    }


    return 0 ;
}