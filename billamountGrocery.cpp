#include<bits/stdc++.h>
using namespace std;
int main(){
    float amount ;
    int age ;
    int gender ;
    int purchased ;
    cout << "Grocery Price Calculator" <<endl;
    cout << "Enter Amount - " ;
    cin >> amount;
    cout << "Enter Age - ";
    cin >>  age ;
    cout << "Enter Gender (0 for female , 1 for male) - ";
    cin >> gender;
    cout << "Have You already Purchased something from this shop before ? (0 for YES , 1 for NO) - " ;
    cin >> purchased;
    float discount =  0 ;
    discount = discount + (amount > 5000)?0.5:0;
    discount = discount + (age >= 70)?3.5:0;
    discount = discount + (gender == 0)?1.5:0;
    discount = discount + (purchased == 1)?7.5:0;

    if(amount > 5000)
    cout << "Final Bill amount = " << amount - (amount * (discount / 100));

}