#include<iostream>
using namespace std;

class student{
int roll;
int marks[5];
public :
void EnterMarks(){
    cout << "Enter Your Roll Number : ";
    cin >> roll ; 
    int size = sizeof(marks)/sizeof(marks[0]);
    cout << "Enter Your Subject Marks (out of 60) :- " << endl ;
    for(int i = 0 ; i < size ; i++){
        cout << "Enter Marks for " << i+1 << " Subject : " ;
        cin >> marks[i];
    }    
}
void Result(){
    int size = sizeof(marks)/sizeof(marks[0]);
    int sum = 0 ;
    for(int i = 0 ; i < size ; i++){
        sum = sum + marks[i];
    }    
    if(sum > 240){
        cout << "You have got a Distinction with marks > 240 !! Congratulations " << endl ;
    }
    else if(sum <= 240 && sum >= 180){
        cout << "You have got a First Class with marks >= 180 !! Congratulations " << endl ;
    }
    else if(sum < 180 && sum >= 150){
        cout << "You have got a Second Class with marks >= 150 !! Try Working hard next time " << endl ;
    }
    else if(sum <  180 && sum >= 150){
        cout << "You have got a Third Class with marks >= 120 !! Work hard to improve your score  " << endl ;
    } 
    else{
        cout << "You have failed !!!! Please Work hard next time  " << endl ;
    }

}
};

int main(){
    student Suryansh ;
    Suryansh.EnterMarks();
    Suryansh.Result();

    cout <<"----------------" << endl ;

    student XYZ ;
    XYZ.EnterMarks();
    XYZ.Result();
}