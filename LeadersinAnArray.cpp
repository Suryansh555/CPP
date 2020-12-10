#include<bits/stdc++.h>
using namespace std;




vector<int> leaders(int arr[], int n){
    vector<int> ans ;
    ans.push_back(arr[n-1]);
    int curr_l = arr[n-1];
    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] >= curr_l){
            ans.push_back(arr[i]);
            curr_l = arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){


    return 0;
}