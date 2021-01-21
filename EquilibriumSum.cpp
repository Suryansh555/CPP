#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ques;
    int size ;
    cout << " Enter Array Size :- ";
    cin >> size ;
    cout << " Enter Array Elements :-\n" ;
    int postfix[size];
    int prefix[size] ;
    for(int i = 0 ; i < size ; i++){
        int val ; 
        cin >> val ;
        ques.push_back(val);
    }
    prefix[0] = ques[0];
    postfix[size-1] = ques[size-1];
    for(int i = 1; i < size ; i++){
        prefix[i] = (ques[i] + prefix[i-1]);
    }
    for(int j = size - 2 ; j >= 0 ; j--){
        postfix[j] = (ques[j] + postfix[j+1]);
    }
    // for(int i = 0 ; i < size ; i++){
    //     cout << prefix[i] << endl;
    // }
    // cout << endl;
    // for(int i = 0 ; i < size ; i++){
    //     cout << postfix[i] << endl;
    // }
    for(int i = 0 ; i < size ; i++){
        if(postfix[i] == prefix[i] ){
            cout << "Equilibrium index = " << i ; 
            return 0 ;
         }
    }
    cout << "There is no equilibrium index " ;
    return 0;

}