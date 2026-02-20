#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string StudentName;
    const int StudentID;

public:
    Student(string name, int id) : StudentName(name), StudentID(id) {}

    void setName(string name) {
        StudentName = name;
    }

    string getName() const {
        return StudentName;
    }

    int getID() const {
        return StudentID;
    }
};

int main() {
    Student student1("Ali", 101);
    Student student2("Ahmed", 102);
    Student student3("Sara", 103);

    student1.setName("Ahsan");

    cout << student1.getName() << " " << student1.getID() << endl;
    cout << student2.getName() << " " << student2.getID() << endl;
    cout << student3.getName() << " " << student3.getID() << endl;

    return 0;
}