#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    vector<int> s2 ;
    while(A.size() != 0){
        int temp = A[A.size() - 1];
        A.pop_back();

        while(s2.size() != 0 && temp < s2[s2.size() -1] ){
            int val = s2[s2.size() - 1];
            s2.pop_back();
            A.push_back(val);
        }
            s2.push_back(temp);
        
        
    }
    return s2;
}
