#include<bits/stdc++.h>
using namespace std;
string solve(int A) {
    
    if(A >= 90 )
        return "A";
    if(A >= 80)
        return "B";
    if(A >= 70)
        return "C";
    if(A >= 60) 
        return "D";
    if(A >= 50) 
        return "E";
    else
        return "F";
}
