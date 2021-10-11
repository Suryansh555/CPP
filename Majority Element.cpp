#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int majorityElement(vector<int>& a) {
        int maj_index = 0, count = 1;
        int size = a.size();
        int i;
        for (i = 1; i < size; i++) {
            if (a[maj_index] == a[i])
                count++;
            else
                count--;
            if (count == 0) {
                maj_index = i;
                count = 1;
            }
        }
        return a[maj_index];
    }
};