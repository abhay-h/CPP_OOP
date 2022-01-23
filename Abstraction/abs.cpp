#include<iostream>
 
// Abstract is all about hiding complexity of code
// achieving abstraction by  declaring abstract the usable function private

// in this case we hide the variables by making theme private

// Note abstraction is different from encapsulation
class Calculator
{
private:
    private:
    int x,y,z;
public:
    void add(){
    std::cout << "enter three number "<< std::endl;
        std::cin>> x >> y >> z ;
        std::cout <<"The Sum is "<< x+y+z<<std::endl;
    }
};


int main(int argc, char** argv) {
Calculator Student1,Student2,Student3;
Student1.add();
Student2.add();
Student3.add();


return 0;
}