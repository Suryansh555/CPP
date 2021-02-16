#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7 ;
string solve(vector<int> &A) {
       long long int sum = 0 ;
       for(int i = 0 ; i < A.size() ; i++){
            sum += A[i];
        }
        return std::to_string(sum);;
}

int main(){



    return 0 ;
}