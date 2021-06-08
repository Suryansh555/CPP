#include<bits/stdc++.h>
using namespace std ;

int solve(vector<int> &A, int B) {
    unordered_map<int,int> st ;
    int sum = 0 ;
    int count = 0 ;
    for(int i = 0 ; i < A.size(); i++){
        sum = sum + A[i];
        if(sum == B ){
            count++;
        }
        if (st.find(sum - B) != st.end())
            count = count + st[sum - B];
        st[sum]++;
    }
    return count ; 
}
