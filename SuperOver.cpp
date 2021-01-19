#include<iostream.h>
using namespace std;
int main(){
    cout<<"\t\t\t\t\t\t Welcome To Super Over Calculator" <<endl;
    cout<<"TEAM B Bats First ....." << endl << "Enter Team B Score :-" << endl;
    cout << "1-6 -> For Runs" <<endl << "-1 -> Wide , No ball" <<endl << "-2 -> Wicket" <<endl;
    int balls1 = 0; 
    int runs1 = 0 ;
    int Wicket1 = 0 ;
    int currentball1 ;
    while(balls1 < 6 &&  Wicket1 < 2){
        cout << "Ball " << balls1 + 1  << endl ;
        cin >> currentball1 ;
        if((currentball1 == -1)){
            cout << "No Ball Or Wide" << endl;
            
        }
        else if((currentball1 == -2)){
            cout << "Wicket Taken ...  " << endl;
            balls1 = balls1 + 1;
            Wicket1 = Wicket1 + 1; 
            
        }
        else if(currentball1 < 7 && currentball1 > -1 ){
            cout << currentball1 << " Runs taken" << endl;
            balls1 = balls1 + 1;
            runs1 = runs1 + currentball1;
        }
        else{
            cout<<"Please Enter Valid Choice " << endl;
        }
        cout << 6 - balls1 << " balls Remaining"<<endl; 
}
cout << "\t\t\t Session 1 Over " << endl ;
cout<< "Runs Scored by Team B = " << runs1 <<endl;
cout << " Team A needs to get " << runs1 + 1 << " in 6 Balls To win" << endl << endl;;

cout<<"TEAM A Bats Now ....." << endl << "Enter Team A Score :-" << endl;
cout << "1-6 -> For Runs" <<endl << "-1 -> Wide , No ball" <<endl << "-2 -> Wicket" <<endl;

    int balls2 = 1; 
    int runs2 = 0 ;
    int Wicket2 = 0 ;
    int currentball2 ;
    while(balls2 < 7 && Wicket2 < 2){
        cout << "Ball " << balls2 << endl ;
        cin >> currentball2 ;
        if((currentball2 == -1)){
            cout << "No Ball Or Wide" << endl;
            
        }
        else if((currentball2 == -2)){
            cout << "Wicket Taken ...  " << endl;
            balls2 = balls2 + 1;
            Wicket2 = Wicket2 + 1; 
            
        }
        else if(currentball2 < 7 && currentball2 > -1 ){
            cout << currentball2 << " Runs taken" << endl;
            balls2 = balls2 + 1;
            runs2 = runs2 + currentball2;
        }
        else{
            cout<<"Please Enter Valid Choice " << endl;
        }
        if(runs2 > runs1){
            cout << "Team A wins the game " << endl; 
            return 0 ;
        }
        cout << "Team A needs " << runs1 + 1 - runs2 << " to win in " << 6 - balls2 + 1 << " balls" <<endl;
}
if(runs1 > runs2){
  cout <<  "Team B wins the game"<<endl;
}
if(runs1 == runs2){
  cout <<  "Result - Tie" << endl;
}





    return  0 ;
}