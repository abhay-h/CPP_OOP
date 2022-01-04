#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Bmw";
    void honk() {
      cout << "Beepppp**! \n" ;
    }
};


// Derived class
class Car: public Vehicle {
  public: 
    string model = "c100";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

