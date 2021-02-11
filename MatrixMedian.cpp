/*
Given a N cross M matrix in which each row is sorted, find the overall median of the matrix. Assume N*M is odd.

For example,

Matrix=
[1, 3, 5]
[2, 6, 9]
[3, 6, 9]

A = [1, 2, 3, 3, 5, 6, 6, 9, 9]

Median is 5. So, we return 5.
Note: No extra memory is allowed.
*/
#include<bits/stdc++.h>
using namespace std;



int findMedian(vector<vector<int> > &A) {
    int r=A.size(),c=A[0].size();
    int req=(r*c+1)/2;
    int minm=INT_MAX,maxm=INT_MIN;
    for(int i=0;i<r;i++){
        minm=min(minm,A[i][0]);
        maxm=max(maxm,A[i][c-1]);
    }
    while(minm<maxm){
        int mid=minm+(maxm-minm)/2;
        int place=0;
        for(int i=0;i<r;i++)
         place+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
         
        if(place<req) minm=mid+1;
        else maxm=mid;
    }
    return minm;
}