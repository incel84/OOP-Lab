#include <iostream>
#include <string>
using namespace std;

class RentCalculator {
private:
    const double RentPerDay;
    const string CustomerName;
    int NumberOfDays;
    double CustomerRent;

public:
    RentCalculator(string name, int days)
        : RentPerDay(1000.85), CustomerName(name), NumberOfDays(days), CustomerRent(0) {}

    void RentWithDiscount() {
        CustomerRent = (NumberOfDays - 1) * RentPerDay;
    }

    void RentWithoutDiscount() {
        CustomerRent = NumberOfDays * RentPerDay;
    }

    void DisplayRent() const {
        cout << "Customer Name: " << CustomerName << endl;
        cout << "Days: " << NumberOfDays << endl;
        cout << "Rent: " << CustomerRent << endl;
        cout << endl;
    }
};

int main() {
    RentCalculator c1("Ali", 5);
    RentCalculator c2("Ahmed", 10);

    c1.RentWithoutDiscount();
    c2.RentWithDiscount();

    c1.DisplayRent();
    c2.DisplayRent();

    return 0;
}