#include <iostream>
#include <cmath>
using namespace std;

class Point {
    double x, y;
public:
    void setPoint(double a, double b){ x = a; y = b; }
    void moveInX(double u){ x += u; }
    void moveInY(double u){ y += u; }
    void move(double u, double v){ x += u; y += v; }
    double distanceFromOrigin(){ return sqrt(x*x + y*y); }
    double distanceBetweenPoints(Point p){
        return sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y));
    }
    bool isEqual(Point p){ return x == p.x && y == p.y; }
};

int main(){
    Point p1, p2;
    p1.setPoint(3,4);
    p2.setPoint(6,8);
    cout << p1.distanceFromOrigin() << endl;
    cout << p1.distanceBetweenPoints(p2) << endl;
    cout << p1.isEqual(p2) << endl;
}
