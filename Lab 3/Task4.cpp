#include <iostream>
using namespace std;

class MemberType {
    string name;
    int memberID;
    int booksBought;
    double amountSpent;
public:
    MemberType() { booksBought=0; amountSpent=0; }
    MemberType(string n,int id) {
        name=n; memberID=id;
        booksBought=0; amountSpent=0;
    }

    void setName(string n) { name=n; }
    void setID(int id) { memberID=id; }

    void updateBooks(int b) { booksBought+=b; }
    void updateAmount(double a) { amountSpent+=a; }

    void print() {
        cout<<name<<" "<<memberID<<" "<<booksBought<<" "<<amountSpent<<endl;
    }
};

int main() {
    MemberType m("Jawad",1);
    m.updateBooks(2);
    m.updateAmount(1000);
    m.print();
}
