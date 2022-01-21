// Type of inheritance where derived classs have inhereted from more than one base class

#include <iostream>
class Vehicle
{
protected:
    int tyers;
    int seats;

};

class Looks
{
protected:
    std::string Vehicle_Usage;
    void greet()
    {
        std::cout << " !Hello " << std::endl;
    }
};

class Truck : protected Vehicle, protected Looks // Class Truck inheriting both class vechicle and looks
{

public:
    void greet()
    {
        Looks::greet(); // member function from class looks called
    }
    void printMessage()
    {
        Vehicle_Usage = " Goods transport";
        tyers = 14;
        std::cout << "Truck has " << tyers << std::endl;
        std::cout << "Truck has use of " << Vehicle_Usage << std::endl;
    }
};

int main(int argc, char **argv)
{

    Truck *Driver1 = new Truck;
    Driver1->greet();
    Driver1->printMessage();

    return 0;
}