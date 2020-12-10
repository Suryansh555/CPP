#include<bits/stdc++.h>
using namespace std;
int count(int num , int arr[] , int current ,  int max , int count1){

if(current = num){
    if(max > count1 ){
        max = count1; 
    }
    return max;
}
if(current > num){
    return 0;
}


for(int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
    count(num,arr[i] , current + arr[i], max , count1 = count1 + 1);
}


}
int main(){

    int arr[] = {1,2,5}
count(11,arr,0,0,0);

    return 0;
}