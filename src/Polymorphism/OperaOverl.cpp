#include <iostream>

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        int real = 0, img = 0;
    }
    Complex(int r, int i)
    {
        this->real = r;
        this->img = i;
    }

    void Display(){
        std::cout << real << " + " << img << std::endl; 
    }
    Complex operator +(Complex c){ // operator overloading
        Complex temp;
        temp.real =real+ c.real;
        temp.img =img+ c.img;
        return temp;
    }
};


int main(int argc, char **argv)
{
    Complex c1(48,53);
    Complex c2(49,51);
    Complex c3;
    c3 = c1 + c2;
    c3.Display();

    return 0;
}