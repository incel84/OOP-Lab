#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    void setLength(double l){ length = l; }
    void setWidth(double w){ width = w; }
    void setDimensions(double l, double w){ length = l; width = w; }
    double getLength(){ return length; }
    double getWidth(){ return width; }
    double calculateArea(){ return length * width; }
    double calculatePerimeter(){ return 2 * (length + width); }
    bool isSquare(){ return length == width; }
};

int main(){
    Rectangle r;
    r.setDimensions(5,5);
    cout << r.getLength() << endl;
    cout << r.getWidth() << endl;
    cout << r.calculateArea() << endl;
    cout << r.calculatePerimeter() << endl;
    cout << r.isSquare() << endl;
}
