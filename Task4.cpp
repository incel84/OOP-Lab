#include <iostream>
using namespace std;

class Book {
    string title, author, publisher;
    double price;
    int stock;
public:
    Book(string t, string a, string p, double pr, int s){
        title=t; author=a; publisher=p; price=pr; stock=s;
    }
    void buyBook(string t, int q){
        if(t==title && q<=stock){
            stock -= q;
            cout << price*q << endl;
        }
    }
    void displayDetails(){
        cout << title << " " << author << " " << publisher << " "
             << price << " " << stock << endl;
    }
};

int main(){
    Book b("CPP","Jawad","ABC",500,10);
    b.displayDetails();
    b.buyBook("CPP",2);
    b.displayDetails();
}
