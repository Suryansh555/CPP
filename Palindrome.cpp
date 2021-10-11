#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false ;
        }
        string str = to_string(x) ;
        int p1 = 0;
        int p2 = str.size() - 1;
        while(p1 <= p2){
            if(str[p1] != str[p2]){
                return false ;
            }
            p1 ++ ;
            p2 -- ;
        }
        return true ;
    }
};