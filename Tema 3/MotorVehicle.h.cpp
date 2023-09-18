#include <iostream>
#include <string>

class MotorVehicle {
public:
    MotorVehicle(std::string Make, std::string FuelType, int YOM, std::string Color, int ENG)
        : make{Make}, fuel{FuelType}, manufacture{YOM}, color{Color}, engine{ENG}{
    }

    void setmake(std::string Make) {
        make = Make;
    }

    void setfuel(std::string FuelType) {
        fuel = FuelType;
    }

    void setmanufacture(int YOM) {
        manufacture = YOM;
    }

    void setcolor(std::string Color) {
        color = Color;
    }

    void setengine(int ENG) {
        engine = ENG;
    }

    std::string getmake() const {
        return make;
    }
    std::string getfuel() const {
        return fuel;
    }
    int getmanufacture() const{
        return manufacture;
    }
    std::string getcolor() const {
        return color;
    }
    int getengine() const{
        return engine;
    }

    void displayCarDetails() const{
        std::cout << "Marca " << make << std::endl;
        std::cout << "Combustible " << fuel << std::endl;
        std::cout << "Manufactura " << manufacture << std::endl;
        std::cout << "Color " << color << std::endl;
        std::cout << "Engine " << engine << std::endl;
    }

private:
    std::string make;
    std::string fuel;
    int manufacture;
    std::string color;
    int engine;
        
};