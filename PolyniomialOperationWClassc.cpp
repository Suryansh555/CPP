#include<iostream>
using namespace std;

class poly{
    int coef;
    int expo;
    public:
    void setter(int coef1 , int expo1){
        coef = coef1;
        expo = expo1;
    }
    void getter(){
        cout << coef << "X"<< "^" << expo << endl;
    }

    void add(poly a , poly b ){
        if(a.expo == b.expo){
            cout <<  "Poly Add Result - "<< a.coef + b.coef<< "X" << "^" << a.expo << endl;
            return;
        }
        else{
             cout <<  "Poly Add Result - " << a.coef << "X" << "^" << a.expo << " + " << b.coef << "X" << "^" << b.expo << endl;  
        }
    }
    void subtract(poly a , poly b){
        if(a.expo == b.expo){
            cout <<  "Poly Subtract Result - "<< a.coef - b.coef<< "X" << "^" << a.expo << endl;
            return;
        }
        else{
             cout <<  "Poly Subtract Result - " << a.coef << "X" << "^" << a.expo << " - " << b.coef << "X" << "^" << b.expo << endl;  
        }
    }
    void multiply(poly a , poly b){
                    cout <<  "Poly Multiplication Result - "<< a.coef * b.coef<< "X" << "^" << a.expo + b.expo << endl;
            return;
    }
};
int main(){
    poly a ; 
    poly b ; 
    a.setter(3,10);
    b.setter(6,10);
    a.getter();
    a.add(a,b);
    a.subtract(a,b);
    a.multiply(a,b);
    return 0;
}