#include<bits/stdc++.h>
using namespace std ;

class Car{
  private :
    string Company ;
    int Build ;
    static int number ;
  public :
    Car(string company , int build){
        number++;
        Company = Company;
        Build = build ;
        cout << company << "'s Car Created " << endl ;
    }
    static void NumberOfCars(){
        cout << "There are total " << number << endl;
    }
};

int Car::number = 0;

int main(){
    Car a("Honda",1);
    Car b("BMW",5);
    Car c("Toyota",10);
    Car::NumberOfCars();
    return 0 ;
}