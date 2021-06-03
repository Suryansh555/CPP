#include<bits/stdc++.h>
using namespace std ; 

string Solution(int A) {

string numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", 
             "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    if(A<1 && A>3999)
    return "";
    
    int i=0;
    string res = "";
    while(A > 0)
    {
        if(A - values[i] >= 0)
        {
            res += numerals[i];
            A = A - values[i];
        }
        else
        {
            i++;
        }
    }
    
    
    return res;
}