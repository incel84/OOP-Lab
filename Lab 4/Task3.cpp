#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started." << endl;
    }
};

class Car {
private:
    Engine engine;

public:
    Car() {}

    void drive() {
        engine.start();
        cout << "Car is driving." << endl;
    }
};

int main() {
    Car c;
    c.drive();
    return 0;
}