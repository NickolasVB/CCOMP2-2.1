#include <iostream>
#include "Date.h.cpp"

using namespace std;

int main()
{
    Date date(9,21,2022);
     
    cout << "Date is: " << endl;
    date.displayDate();

    int month;
    int day;
    int year;

    cout << "\n\n Enter the month: "; 
    cin >> month;
    cout << "\n\n Enter the day: "; 
    cin >> day;
    cout << "\n\n Enter the year: "; 
    cin >> year;

    cout << month << "/" << day << "/" << year << endl;

    return 0;



}