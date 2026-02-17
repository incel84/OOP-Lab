//25k-2532
#include <iostream>
using namespace std;

class DayType {
    string day;
    string days[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
public:
    DayType() { day = "Sun"; }
    DayType(string d) { day = d; }

    void setDay(string d) { day = d; }
    void printDay() { cout << day << endl; }
    string getDay() { return day; }

    string nextDay() {
        for(int i=0;i<7;i++)
            if(days[i]==day)
                return days[(i+1)%7];
        return "";
    }

    string prevDay() {
        for(int i=0;i<7;i++)
            if(days[i]==day)
                return days[(i+6)%7];
        return "";
    }

    string addDays(int n) {
        for(int i=0;i<7;i++)
            if(days[i]==day)
                return days[(i+n)%7];
        return "";
    }
};

int main() {
    DayType d("Mon");
    d.printDay();
    cout << d.nextDay() << endl;
    cout << d.prevDay() << endl;
    cout << d.addDays(4) << endl;
}


