#include <iostream>
using namespace std;

class Time {
    int h, m, s;
public:
    void setTime(int hh=0, int mm=0, int ss=0){
        h = hh; m = mm; s = ss;
    }
    void addTime(Time);
    void checkTime(){
        cout << (h<10?"0":"") << h << ":"
             << (m<10?"0":"") << m << ":"
             << (s<10?"0":"") << s << endl;
    }
};

void Time::addTime(Time t){
    s += t.s;
    m += s/60;
    s %= 60;
    m += t.m;
    h += m/60;
    m %= 60;
    h += t.h;
}

int main(){
    Time t1, t2;
    t1.setTime(2,45,50);
    t2.setTime(1,20,30);
    t1.addTime(t2);
    t1.checkTime();
}
