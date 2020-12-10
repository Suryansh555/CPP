#include<iostream>
using namespace std;
int main (){
int n ;
cin >> n; 

for(int i = 1 ; i <= n + 1 ; i ++ ){
    int no = n ;
    for(int j = 1 ; j<=i ; j++){
        cout<<no<<" ";
        no = no - 1 ;
    }
    for(int z = 1 ; z <= 2*(n-i) + 1 ; z++ ){
        cout<<"  ";
    }
    no = no + 1;
    for(int j = n- i + 1 ; j<=n ; j ++){
      if(j!=0){
          cout<<no<<" ";
      }
      no = no + 1;
    }
    cout<<endl;
}
for(int i = n ; i >= 1 ; i--){
    int no = n ;
    for(int j = 1 ; j<= i ; j++){
        cout<<no<<" ";
        no = no - 1;
    }
    for(int z = 1 ; z<= (2*(n-i)+1); z++){
        cout<<"  ";
    }
    for(int j = n-i+1 ; j<=n ; j ++){
        cout<<j<<" ";
    }
    cout<<endl;

}


    return 0 ;
}