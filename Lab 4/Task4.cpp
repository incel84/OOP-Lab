#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;

    Employee(string n) {
        name = n;
    }
};

class Department {
private:
    Employee* employees[10];
    int count;

public:
    Department() {
        count = 0;
    }

    void addEmployee(Employee* e) {
        employees[count++] = e;
    }

    void showEmployees() {
        for (int i = 0; i < count; i++) {
            cout << employees[i]->name << endl;
        }
    }
};

int main() {
    Employee e1("Ali");
    Employee e2("Ahmed");

    Department d;
    d.addEmployee(&e1);
    d.addEmployee(&e2);

    d.showEmployees();

    return 0;
}