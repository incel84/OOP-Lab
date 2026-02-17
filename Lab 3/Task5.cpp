#include <iostream>
using namespace std;

class Book {
public:
    string title;
    double price;
    int stock;

    void set(string t,double p,int s) {
        title=t; price=p; stock=s;
    }
};

class Member {
public:
    string name;
    int booksBought;
    double totalSpent;

    void set(string n) {
        name=n;
        booksBought=0;
        totalSpent=0;
    }

    void buy(double price) {
        double discountPrice = price * 0.95;
        totalSpent += discountPrice;
        booksBought++;

        if(booksBought%11==0) {
            double avg = totalSpent/10;
            totalSpent -= avg;
            totalSpent=0;
        }
    }
};

int main() {
    Book books[1000];
    Member members[500];

    books[0].set("OOP",500,20);
    members[0].set("Ali");

    members[0].buy(books[0].price);

    cout<<members[0].name<<" "
        <<members[0].booksBought<<" "
        <<members[0].totalSpent<<endl;
}
