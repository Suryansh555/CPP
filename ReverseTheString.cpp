#include<bits/stdc++.h>
using namespace std;

string reverse(string A){
    int i = 0 ; 
    int j = A.length() - 1 ;
    while(i <= j){
        swap(A[i],A[j]);
        i++;
        j--;
    }
    return A; 
}



string solve(string A) {
    vector<string> words ;
    string temp = ""; 
    A = reverse(A);
    for(int i = 0 ; i < A.length() ; i++){
        if(A[i] == ' '){
            if(i != 0){
                temp = reverse(temp);
                words.push_back(temp);
                temp = "";
            }
            
            while(A[i] == ' '){
                i++;
            }
            i--;
        }
        else{
            temp += A[i];
        }
    }
        temp = reverse(temp);
        words.push_back(temp);

    string ans = "";
    for(auto it = words.begin() ; it != words.end() ;it++){
        ans += *it;
        if(it != words.end() - 1){
            ans+= " ";
        }
        
    }
    int n = ans.length() - 1;
    if(ans[n] == ' '){
        return ans.substr(0,n);
    }

    return ans;
}
