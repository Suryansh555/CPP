#include<bits/stdc++.h>
using namespace std ;


bool isNumeric(char ch)
{
    return (ch >= '0' && ch <= '9') ? true : false;
}

int atoi(const string A) {
        
    int res = 0, sign = 1, i = 0;
    
    while(A[i] == ' ') 
        i++;
    if(A[0] == '-' || A[0] == '+')
    {
        if(A[i++] == '-') 
            sign = -1;
        else 
            sign = 1;
    }
    
    while(isNumeric(A[i]))
    {
        if(res > INT_MAX/10 || (res == INT_MAX/10 && A[i]-'0' > 7))
        {
            if(sign == 1)
                return INT_MAX;
            else return INT_MIN;
        }
        
        res = res*10 + (A[i++]-'0');
    }
    
    return sign*res;
}




