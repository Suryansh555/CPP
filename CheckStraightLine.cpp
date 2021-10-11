
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size = coordinates.size() ;
        if(size == 2)
            return true;
        float xslope ;
        float yslope ;
        int x1 =  coordinates[0][0];
        int x2 = coordinates[1][0];
        int y1 = coordinates[0][1];
        int y2 = coordinates[1][1];
        yslope = ((float)y2 - float(y1)) ;
        xslope = ((float)x2 - float(x1));
        for(int i = 2 ; i < size ; i++){
            float x = coordinates[i][0];
            float y = coordinates[i][1];
            if((x-x1) * yslope != (y-y1) * xslope){
                return false ;
            }
        }
        return true ;
        
    }
};