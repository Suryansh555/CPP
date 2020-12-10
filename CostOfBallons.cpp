#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a ,b ;
    int match;
    int no1 ,no2;
    int no;
    int temp;
    for(int i = 0 ; i<n ; i++){
        cin >> a >> b;
        cin>>match;
        no1 = 0;
        no2 = 0;
        if(a > b){
            temp = b ;
            b = a; 
            a = temp ;
        }
        while(match!=0){
            cin >> no;
           no1 = no1 + no ;
           cin >> no;
           no2 = no2 + no;
           match = match -1;
        }
        if(no1 > no2){
            temp = no2 ;
            no2 = no1 ; 
            no1 = temp ;
        }
		
        cout<<no1*b+no2*a<<endl;
        
        
    }
}