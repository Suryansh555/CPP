#include<bits/stdc++.h>
using namespace std ;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(){
        length = 0 ;
        breadth = 0 ;
    }

        Rectangle(int value ){
        length = value ;
        breadth = value ;
    }

    Rectangle(int length1 ,  int breadth1 ){
        length = length1 ;
        breadth = breadth1 ;
    }

    void CalculateArea(){

        cout << "Area of the Rectangle is " << length *  breadth <<  endl;

    }

    void DisplayArea(){
        CalculateArea();
    }

};

int main (){
    Rectangle st ;
    st.DisplayArea();
    Rectangle A(10);
    A.DisplayArea();
    Rectangle B(10,5);
    B.DisplayArea();
}