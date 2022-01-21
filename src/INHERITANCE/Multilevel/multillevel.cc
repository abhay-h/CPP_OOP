// Inheritance in which Base class has a derived class and derived classes have another derived class

/*
    │Base class│

          ↓
    │Derivied class 1│

          ↓

    │Derivied class 2│
            ↓

    │Derivied class 3│


 Here There is a Base class and class 1 is derived class from Base,derived class 2 is derived from derived class 1 .................................................

*/

#include <iostream>
class Base // single Base class
{
public:
      int x;
      void Getdata()
      {
            std::cout << "Enter value of x= ";
            std::cin >> x;
      }
};

class Derive1 : public Base // derived class from Base class
{
public:
      int y;
      void Readdata()
      {
            std::cout << "\nEnter value of y= ";
            std::cin >> y;
      }
};
class Derive2 : public Derive1 // derived from class derive1
{
private:
      int z;

public:
      void Indata()
      {
            std::cout << "\nEnter value of z= ";
            std::cin >> z;
      }
      void Product()
      {
            std::cout << "\nProduct= " << x * y * z;
      }
};
int main(int argc, char** argv)
{
      Derive2 a; // object of derived class
      a.Getdata();
      a.Readdata();
      a.Indata();
      a.Product();
      return 0;
} 