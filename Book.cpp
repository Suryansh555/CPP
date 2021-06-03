#include<iostream>
using namespace std;

class book{
    int book_number ;
    string title ;
    float price;
    int quantity ;
    float total_price = 0;

    public:
    void EnterValue(){
        cout << "Enter Book Number : "  ;
        cin >> book_number;
        cout << "Enter Book Title : ";
        cin >> title;
        cout << "Enter Price of the book : ";
        cin >> price ;
        cout << "Enter the Quantity of the book : ";
        cin >> quantity ;
    }
    void CalculateTotalPrice(){
        total_price = quantity * price ;
        cout << "The Total Price of Book " << title << " is " << total_price << endl; 
    }
    void Display(){
        cout << "Book Details ----------> " << endl;
        cout << "Book Number : " << book_number << endl;
        cout << "Book Title : " << title << endl;
        cout << "Price Per Book : " << price << endl;
        cout << "Quantity Available : " << quantity << endl;
        CalculateTotalPrice();
        }

};


int main(){
    book Percy ;
    Percy.EnterValue();
    Percy.CalculateTotalPrice();
    Percy.Display() ;

    cout << "-------------------" << endl;

    book King ;
    King.EnterValue();
    King.CalculateTotalPrice();
    King.Display() ;

}