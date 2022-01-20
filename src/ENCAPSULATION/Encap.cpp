// Use of encapsulation using simple programming 

#include<iostream>
#include<string>

class _Studnet_Info
{
private:
        std::string name;
        int Roll_No;
public:
    void take(){
        std::cout << "\nEnter a name " << std::endl;
        std::getline(std::cin, name);
        std::cout << "\nEnter a Roll number " << std::endl;
        std::cin >> Roll_No;
    }

    void display(){
        std::cout << "\nName = " << name << std::endl;
        std::cout << "\nRoll_No = " << Roll_No;

    }
};

int main(int argc, char** argv) {

_Studnet_Info Finn;
Finn.take();
Finn.display();   
return 0;
}