#include<bits/stdc++.h>
using namespace std;
int main(){
 int size ;
 cin >> size ;
 vector<int> arr; 
 for(int i = 0 ; i < size ; i++){
     int val;
     cin >> val;
     arr.push_back(val);
 }
 sort(arr.begin(),arr.end());
 int max = arr[size-1];
 int index = 0 ;
 int sum = 0; 
 for(int i = 1 ; i * i <= max ; i++){
     if(i*i < arr[index]){
         continue;
     }
     if(i*i == arr[index]){
         sum = sum + arr[index];
         index++;
     }
     if(i*i > arr[index]){
         index++;
         i--;
     }
 }
 cout << "Sum = " << sum ;



}
