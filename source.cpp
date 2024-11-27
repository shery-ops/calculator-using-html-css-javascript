#include <iostream>
#include <string>
using namespace std;

class dayType {
private:
    string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int currentDay;

public:
    dayType(int day = 0) {
        currentDay = day;
    }

    void setDay(int day) {
        if (day >= 0 && day <= 6)
            currentDay = day;
        else
            cout << "Invalid day. Please enter a value between 0 (Sunday) and 6 (Saturday)." << endl;
    }

    // Print the current day
    void printDay() const {
        cout << "Current day: " << days[currentDay] << endl;
    }

    string getDay() const {
        return days[currentDay];
    }
    
    string getNextDay() const {
        return days[(currentDay + 1) % 7];
    }

    string getPreviousDay() const {
        return days[(currentDay - 1 + 7) % 7];
    }

    string addDays(int numDays) const {
        return days[(currentDay + numDays) % 7];
    }
};

int main() {
    int add;
    int current;
    dayType today(1);//monday as current day
    today.printDay();
    cout<<"Enter a new number to set it as current day(0-6)"<<endl;
    cin>>current;
    today.setDay(current);
    today.printDay();
    
    cout<<"Next day: "<<today.getNextDay() << endl;

cout<<"Previous day: "<<today.getPreviousDay() << endl;
   cout<<"Enter number to add on current day"<<endl;
    cin>>add;
    cout << "Added "<<add<<" days: " << today.addDays(add) << endl;
cout<<"Enter another number to add on current day"<<endl;
    cin>>add;
    cout << "Added "<<add<<" days: " << today.addDays(add) << endl;
    return 0;
}
