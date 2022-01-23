/* Basically C++ hybrid inheritance is combination of two or more types of inheritance.
It can also be called multi path inheritance. */

#include <iostream>

class Number
{
public:
    int x = 15;
    void setNum(int x)
    {
        std::cout << " X = " << x << std::endl;
    }
};

class INumber : public Number
{
public:
    int y = x;
    void setINumber(int y)
    {
        std::cout << " y = " << y << "i" << std::endl;
    }
};

class Aplhabates
{
public:
    char Characters1 = 'A';
    char Characters2 = 'B';
    char Characters3= 'C';
};

class FunnyThing : public Aplhabates, public INumber
{

public:
    void Display()
    {
        std::cout << Characters1 << Characters2 <<Characters3<< " " << y << std::endl;
    }
};

int main(int argc, char **argv)
{

    FunnyThing *P1 = new FunnyThing;
    P1->Display();
    return 0;
}