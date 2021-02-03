#include<bits/stdc++.h>
using namespace std;
int LastOccurence(const vector<int> &A , int B){
    int low = 0 ;
    int high = A.size() - 1;
    int ans = -1;
    while(low <= high){
        int mid = (high + low)/2;
        if(A[mid] < B){
            low = mid + 1;
        }
        else if(A[mid] > B){
            high = mid - 1 ;
        }
        else{
            ans = mid ;
            low = mid + 1 ;
        }
    }
    return ans;
}
int FirstOccurence(const vector<int> &A , int B){
    int low = 0 ;
    int high = A.size() - 1;
    int ans = -1;
    while(low <= high){
        int mid = (high + low)/2;
        if(A[mid] < B){
            low = mid + 1;
        }
        else if(A[mid] > B){
            high = mid - 1 ;
        }
        else{
            ans = mid ;
            high = mid - 1 ;
        }
    }
    return ans;
}
vector<int> searchRange(const vector<int> &A, int B) {
    vector<int> ans ;
    ans.push_back(FirstOccurence(A,B));
    ans.push_back(LastOccurence(A,B));
    return ans;
}
