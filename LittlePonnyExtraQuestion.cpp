#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &A) {
    vector<int> ans ; 
    int size = A.size();
    int min = INT_MAX ;
    for(int i = 0 ; i < size ; i++)
        if(A[i] < min)
            min = A[i]; 
    int count = 0 ;
    for(int i = 0 ; i < size ; i++)
        if(A[i] == min)
            count++;
    if(count == size){
        ans.push_back(1);
        ans.push_back(1);
    }
    else{
        int gcd = __gcd(count,size);
        ans.push_back(count / gcd);
        ans.push_back(size/gcd);  
        }
      
    
    return ans;
}

int main(){



    return 0 ;
}