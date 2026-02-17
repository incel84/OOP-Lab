#include <iostream>
using namespace std;

class BookType {
    string title;
    string authors[4];
    int authorCount;
    string publisher;
    string isbn;
    double price;
    int stock;
public:
    BookType() { authorCount=0; price=0; stock=0; }

    void setTitle(string t) { title=t; }
    string getTitle() { return title; }

    void addAuthor(string a) {
        if(authorCount<4) {
            authors[authorCount]=a;
            authorCount++;
        }
    }

    void setPublisher(string p) { publisher=p; }
    void setISBN(string i) { isbn=i; }
    void setPrice(double p) { price=p; }
    void setStock(int s) { stock=s; }

    string getISBN() { return isbn; }
    int getStock() { return stock; }

    void updateStock(int s) { stock+=s; }

    void print() {
        cout<<title<<" "<<isbn<<" "<<price<<" "<<stock<<endl;
    }
};

int main() {
    BookType books[100];
    books[0].setTitle("C++");
    books[0].setISBN("123");
    books[0].setPrice(500);
    books[0].setStock(10);
    books[0].print();
}
