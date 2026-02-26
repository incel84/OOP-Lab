//25k-2532
#include <iostream>
using namespace std;

class Restaurant;
class Order;

class Customer {
public:
    string name;
    Customer(string n) {
        name = n;
    }
    void placeOrder(Restaurant* r, string food);
};

class Order {
public:
    int id;
    string customerName;
    string restaurantName;
    string foodItem;

    Order(int i, string c, string r, string f) {
        id = i;
        customerName = c;
        restaurantName = r;
        foodItem = f;
    }

    void show() {
        cout << "Order ID: " << id << endl;
        cout << "Customer: " << customerName << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Food: " << foodItem << endl;
    }
};

class Restaurant {
public:
    string name;
    Restaurant(string n) {
        name = n;
    }
    void takeOrder(Order* o) {
        o->show();
    }
};

void Customer::placeOrder(Restaurant* r, string food) {
    static int id = 1;
    Order* o = new Order(id++, name, r->name, food);
    r->takeOrder(o);
}

int main() {
    Customer c1("Ali");
    Restaurant r1("Pizza House");
    c1.placeOrder(&r1, "Zinger Burger");
    return 0;
}