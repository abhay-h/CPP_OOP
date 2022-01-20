// Polymorphism can be achieved using function overriding , operator overloading,function overloading 

#include <iostream>
#include <string>

void Cal(int a, int b)
{
    std::cout << "addition is " << a + b << std::endl;
}

void Cal(int a, int b, int c, int d)
{
    std::cout << "addition is " << a + b + c + d << std::endl;
}

void Cal(int a, int b, int c, int d, int e)
{
    std::cout << "addition is " << a + b + c + d * e << std::endl;
}
void Cal(int a, int b, int e)
{
    std::cout << "calculation  is " << a + (b * e )<< std::endl;
}

int main(int argc, char **argv)
{

    int a = 12, b = 97, c = 86, d = 57, e = 8;

    Cal(a, b);
    Cal(a, b, c, d);
    Cal(a, b, c, d, e);
    Cal(a, b,e);

    return 0;
}
