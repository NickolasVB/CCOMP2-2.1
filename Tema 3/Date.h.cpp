#include <iostream>
#include <string>

class Date{
public:

    Date(int Month, int Day, int Year)
        : day{Day}, year{Year} {
       if (Month >= 1 && Month <= 12){
        month = Month;
       } else {
         month = 1;
       }
    }

    void setmonth(int Month) {
        month = Month;
    }
    void setday(int Day) {
        day = Day;
    }
    void setyear(int Year) {
        year = Year;
    }

    int getmonth() const {
        return month;
    }
    int getday() const {
        return day;
    }
    int getyear() const {
        return year;
    }

    void displayDate() const {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }

private:
    int month;
    int day;    
    int year;
   
};