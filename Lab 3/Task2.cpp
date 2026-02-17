#include <iostream>
using namespace std;

class Person {
    string firstName, middleName, lastName;
public:
    Person() {}
    Person(string f,string m,string l) {
        firstName=f; middleName=m; lastName=l;
    }

    void setFirstName(string f) { firstName=f; }
    void setMiddleName(string m) { middleName=m; }
    void setLastName(string l) { lastName=l; }

    bool checkFirstName(string f) { return firstName==f; }

    bool checkFullName(string f,string m,string l) {
        return firstName==f && middleName==m && lastName==l;
    }

    void print() {
        cout<<firstName<<" "<<middleName<<" "<<lastName<<endl;
    }
};

int main() {
    Person p("Ali","Ahmad","Khan");
    p.print();
    cout<<p.checkFirstName("Ali")<<endl;
    cout<<p.checkFullName("Ali","Ahmad","Khan")<<endl;
}
