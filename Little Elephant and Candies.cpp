#include <iostream>
using namespace std;


int main() {
    int n ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n ;

     while(n!=0){
         int a,b;
         cin >> a >> b ;
         int sum = 0 ;
         while(a!=0){
             int c ;
             cin >> c ;
             sum = sum + c ;
             a--;
         }
         if(sum <= b)
             cout<<"Yes"<<'\n';
         else
             cout<<"No"<<'\n';
             n--;
     }
     
	return 0;
}

