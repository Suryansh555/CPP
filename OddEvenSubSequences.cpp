#include<bits/stdc++.h>
using namespace std;
int  solve(vector<int> &A) {
 
    int n = A.size();
    bool first = A[0]%2 ? true : false;
    int count = 1; 
    int i = 1; 
    if(first){
        even :
        while(i<n){
                if(A[i]%2 == 0){ 
                    count++;     
                    goto odd;    
                }
                else i++;
            }
        
        odd : 
            while(i<n){
                if(A[i]%2 != 0){ 
                    count++;      
                    goto even;    
                }
                else i++;
            
            }
        }

    else{
        odd2 : 
            while(i<n){
                if(A[i]%2 != 0){ 
                    count++;
                    goto even2;
                }
                else i++;
            
            }
            
        even2 :
        while(i<n){
                if(A[i]%2 == 0){    
                    count++;
                    goto odd2;
                }
                else i++;
            }
        
    }
        
    return count;
}