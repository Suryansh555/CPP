#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int N; 
    printf("Enter N: ");
    scanf("%d", &N);
    int row = 1  ; 
    int col = 1 ; 
    int k = 1;
    while(row <= N && col <= row ){
        if(row == col){
            col = 1 ;
            cout << k << endl; 
            row++;
            k = row;
            continue ;
        }
        
        cout << k ;
        col ++ ;
        k ++ ;
    }
}