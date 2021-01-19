#include<bits/stdc++.h>
using namespace std;
int Solution (string A) {
    if (A.size() == 0 || A.size() == 1){
            return true;
        } else {
            if (A[0] != A[A.size()-1]){
                return false;
            } else {
                return Solution::solve(A.substr(1,A.size()-2));
            }
        }
    }

