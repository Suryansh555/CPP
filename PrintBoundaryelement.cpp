#include<bits/stdc++.h>
using namespace std;
int main(){
    int R;
    int C;
    cout << "Enter Number of Rows :- ";
    cin >> R;
    cout << "Enter Number of Columns :- ";
    cin >> C;
    cout << "Enter Elements Row wise ...." << endl;
    vector<vector<int>> matrix ;
    for(int j = 0 ; j < R ; j++){
        vector<int> row;
        for(int i = 0 ; i < C ; i++){
            int val ;
            cin >> val;
            row.push_back(val);
    }
        matrix.push_back(row);
    }
    int sum = 0 ;
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            if(i == 0 || i == (R-1)){
                sum = sum + matrix[i][j];
               //cout << sum << endl;
                continue;
            }
            if(j == 0 || j == (C-1)){
                sum = sum + matrix[i][j];
              //cout << sum << endl;
            }
        }
    }
    cout << "Sum = " << sum ; 
    

    return 0 ;
}