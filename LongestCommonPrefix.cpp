#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &A) {
    int smallest = 1000001 ;
    int size = A.size();
    string result = "";
    for(int  i = 0 ; i < size ; i++){
        int len = A[i].length();
        if(len < smallest){
            smallest = len ;
        }
    }
    for(int i = 0 ; i < smallest ; i++){
        char temp = A[0][i];
        int k = 1 ;
        while(k < size){
            if (temp==A[k][i])
                ++k;
            else
                return result;
        }
        result += temp;
    }
    return result;
}
