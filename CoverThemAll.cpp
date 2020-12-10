#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n ;
cin >> n;
int sol;
for(int i = 0 ;i <n ; i++){
    cin>>sol;
    int soldier[sol];
    int bombs[sol];
    int a ;
    for(int j = 0 ; j < sol ; j++){
        cin >> a ;
        soldier[j] = a;
    }
    for(int z = 0 ; z < sol ; z++){
        cin >> a ;
        bombs[z] = a ;
    }
    int sum;
    for(int a = 0 ; a < sol ; a++){
        for(int w = a+1; w < sol ; w++){
         sum  = sum + abs(soldier[a] - soldier[w])*max(bombs[a],bombs[w]);

        }
       cout<<sum<<endl;
    }
    cout<<sum<<endl;
}

    return 0 ;
}