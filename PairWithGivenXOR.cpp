#include<bits/stdc++.h>
using namespace std; 

int solve(vector<int> &A, int B) {
    
    int result = 0;
    unordered_map<int, int> m;
 
    for (int i=0; i<A.size() ; i++)
    {
        int curr_xor =  B^A[i];
        if (m.find(curr_xor) != m.end())
            result ++;
        m[A[i]]++;
    }
    return result;
 
}
