#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



   #include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int arra[n];
    int car;
    int i;
    for( i = 0 ; i < n ; i++ ){
        cin>>car;
        arra[i] = car;
    }
    while(i != 0){
        
        i-- ; 
        cout<<arra[i]<<" ";
    }
    return 0 ;
}

