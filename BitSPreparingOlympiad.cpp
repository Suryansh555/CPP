#include<bits/stdc++.h>
using namespace std;
int FastCountSetBits(int number){
    int count  = 0 ;
    while(number!= 0){
        count++;
        number = number & (number - 1 ) ; 
    }
    return count ; 
}
bool isitPosible(int arr[] ,int i ,int  l , int r, int x){
   int pos = 0;
   int sum = 0; 
   int max1 = INT_MIN;
   int min1 = INT_MAX;
   while(i > 0 ){
       if((i & 1) == 1){
           sum += arr[pos];
           max1 = max(max1,arr[pos]);
           min1 = min(min1,arr[pos]);
       }
    i >>= 1;
    pos++;
   } 
   return (max1-min1)>= x && sum >= l && sum <= r ;
}
int main(){
    int n , l , r ,x ;
    cin >> n >> l >> r >> x ;
    int arr[n];
    for(int i = 0 ; i < n ; i ++){
        int val ;
        cin >> val ;
        arr[i] = val ;
    }
    int ans = 0 ;
    for(int i = 0 ; i < ( 1 << n ); i++){
        if(FastCountSetBits(i) >= 2){
            if(isitPosible(arr,i,l,r,x)){
                ans++;
            }
        }
    }
    cout << ans ;





    return 0 ;
}