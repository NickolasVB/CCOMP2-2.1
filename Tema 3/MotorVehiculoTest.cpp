#include <iostream>
#include "MotorVehicle.h.cpp"

using namespace std;

int main()
{
    MotorVehicle motorVehicle1("Toyota","diesel", 2012, "Black", 1794);

    cout << "Car Details: " << endl;
    motorVehicle1.displayCarDetails();

    return 0;
    
}