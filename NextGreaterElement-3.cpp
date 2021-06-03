#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int nextGreaterElement(int n) {
        int n1 = n ;
        vector<int> v ;
        while(n!=0){
                v.push_back(n % 10);
                n = n / 10 ; 
        }
        reverse(v.begin() , v.end());
        int i,j ;
        for(i = v.size() - 1 ; i >= 0 ; i--){
            int p = INT_MAX ; 
            int index = -1 ;
            for(j = i + 1 ; j < v.size() ; j++){
                if(v[j] > v[i] && p > v[j]){
                    p = v[j];
                    index = j ;
                }
            }
            if(p != INT_MAX)
            {
                swap(v[index],v[i]);
                sort(v.begin() + i + 1 , v.end());
                break ; 
            }
        }
        unsigned long long int ans = 0 ;
        for(i = 0 ; i < v.size() ; i++)
            ans = ans * 10 + v[i];
                
        if(ans > pow(2,31) - 1 || (int)ans == n1 ){
            return -1 ;
        }
        return ans;
    }
    
    
                
    
};