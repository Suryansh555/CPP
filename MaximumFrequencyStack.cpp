#include<bits/stdc++.h>
using namespace std ;

vector<int> solve(vector<vector<int> > &A) {
    vector<int> ans ;
    unordered_map<int,int> freqmap;
    unordered_map<int,stack<int>> stackmap ;
    int max_frequency = 0 ;
    for(int i = 0 ; i < A.size() ; i++){
        int result = -1;
        int val = A[i][1];
        if(A[i][0] == 1){
           // Push Element ;
           freqmap[val]++ ;
           int freq = freqmap[val];
           if(freq > max_frequency){
               max_frequency = freq ;
           }
            if(stackmap.find(freq) == stackmap.end()){
                stack<int> a ;
                stackmap.insert({freq,a}) ;
           }

           stackmap[freq].push(val);
        }
        else{
            // Pop Element
            if(max_frequency > 0){
                int val = stackmap[max_frequency].top();
                stackmap[max_frequency].pop();
                if(stackmap[max_frequency].size() == 0){
                    max_frequency--;
                }
                freqmap[val]--;
                result = val ;
            }
        }
        ans.push_back(result);
    }
    
    return ans ;
}
