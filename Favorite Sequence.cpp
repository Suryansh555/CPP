#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin >> t;
while(t--){
cin >> n ;
int arr[n];
for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
}
int a = 0;
int b = n - 1 ;
if (n % 2 != 0){
    while(b-a != 0){
        cout<<arr[a]<<" ";
        cout<<arr[b]<<" ";
        a++;
        b--;
}
cout<< arr[b] << endl;
}
else{

        while(b-a != 1){
        cout<<arr[a]<<" ";
        cout<<arr[b]<<" ";
        a++;
        b--;
}
cout << arr[a] << " " << arr[b]<<endl;
}
}
}