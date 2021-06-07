#include<bits/stdc++.h>
using namespace std ;

class book{
    private : 
    int Bookid ;
    string author ;
    string title ;
    float price ; 
    string publisher;
    int stock ;

    public:

    book(int bookID , string Author , string Title , float Price , string Publisher , int Stock){
        Bookid = bookID;
        author = Author;
        title = Title;
        price = Price;
        publisher = Publisher ;
        stock = Stock;
    }

        void purchasebook(){
        int quantity ; 
        cout << "Please Enter your requested book quantity - " ;
        cin >> quantity ; 
        if(quantity > stock){
            cout << "Request Copies not in Stock "<<endl;
        }
        else{
            cout << "Your Total Price will be " << price * quantity << endl;
            stock = stock - quantity ;
        }
    }

    void Search(int BookId){

        if(BookId == Bookid){
            cout << "Book Found " << endl;
        
        
        cout << "Would you like to purchase ?" << endl;
        string confirm ;
        cin >> confirm;

        if(confirm == "Yes"){
            purchasebook();
        }
        else{
            cout << "Thank you for coming" << endl;
        }
        }
        else{
            return ;
        }
    }

};

int main(){
    cout << "Enter the number of books to be entered into the record - ";
    int book1 ; 
    cin >> book1 ; 
    vector<book> arr ;
    for(int i = 0 ; i < book1 ; i++){
        cout << "Enter bookid - ";
        int bookid ; 
        cin >> bookid ;
        cout << "Enter author - ";
        string author ; 
        cin >> author;
        cout << "Enter title - ";
        string title ; 
        cin >> title;
        cout << "Enter price - ";
        float price ;
        cin >> price ;
        cout << "Enter Publisher - ";
        string publisher ;
        cin >> publisher ;
        cout << "Enter Stock - ";
        int stock ; 
        cin >>  stock ; 
        cout << endl << endl ;
        book arr1 = book(bookid , author , title , price , publisher ,stock);
        arr.push_back(arr1);
    }
    while(1){
        cout << "Would you like to search a book  - " ;
        string choice;
        cin >> choice ;
        if(choice == "No"){
            cout << "Thank you Shutting Down" << endl ;
            break ;
        }
        else{
            int bookid ; 
            cout << "Enter Bookid to search - ";
            cin >> bookid ; 
            for(int i = 0 ; i < book1 ; i++){
                arr[i].Search(bookid);            
                }
        }
    }
}
    
