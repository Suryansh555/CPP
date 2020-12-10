#include<iostream>
using namespace std;

int fastexpo(int e , int f );

int main(){
 cout<<fastexpo(2,6);
}

int fastexpo(int a , int b){
if(b == 0){
    return 1 ;
}
if(b % 2 == 0){
    int half_value  = fastexpo(a,b/2);
    return half_value * half_value;
}
else{
    int half_value  = fastexpo(a,b/2) ;
    return half_value * half_value * a;

}
}
