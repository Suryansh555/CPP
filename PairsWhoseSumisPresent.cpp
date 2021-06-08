#include<bits/stdc++.h>
using namespace std ;

int solve(vector<int> &A) {
    
    unordered_set<int> s;
    for (int i = 0; i < A.size(); i++)
        s.insert(A[i]);
 
    int count = 0 ;
    for (int i = 0; i < A.size(); i++) {
        for (int j = i + 1; j < A.size(); j++) {
            if (s.find(A[i] + A[j]) != s.end()) {
                count++;
            }
        }
    }
    return count; 
    
    
}
