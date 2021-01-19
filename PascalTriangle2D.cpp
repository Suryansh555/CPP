#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > solve(int A) {
     int coef = 1;
    vector<vector<int> > ans;
    for(int i = 0; i < A; i++)
    {
        vector<int> a ;
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
        a.push_back(coef);
        }
        ans.push_back(a);
    }
    return ans;

}
