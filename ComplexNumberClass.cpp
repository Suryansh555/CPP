#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    void setter(int real1 , int img1){
        real = real1;
        img = img1;
    }
    void getter(){
        cout << real << " + "<< img << "i" << endl;
    }
    Complex ComplexAdd(Complex a , Complex b){
        Complex c ;
        c.img = a.img + b.img;
        c.real = a.real + b.real;
        return c;
    }
    Complex ComplexSub(Complex a , Complex b){
        Complex c ;
        c.img = a.img - b.img ;
        c.real = a.real - b.real;
        return c;
    }

};

int main(){
    Complex a ;
    Complex b;
    a.setter(5,2);
    b.setter(2,4);
    a.getter();
    b.getter();
    Complex C = a.ComplexAdd(a,b);
    Complex D = a.ComplexSub(a,b);
    C.getter();
    D.getter();

}
