
#include<iostream>
#include<string>

class _PreReq
{
private:
    int _Quantity;
    std::string _TypeOfReq;

public:
    _PreReq(int Qun, std::string tyreq);
 
};

_PreReq::_PreReq(int Qun, std::string tyreq){

    std::cout << "enter details " << std::endl;
   std::cin >> Qun;
    std::cout << "end type"<<std::endl;
   std::cin>> tyreq;

    this->_Quantity = Qun;
    this->_TypeOfReq = tyreq;
}

int main(int argc, char** argv) {


_PreReq Students(77,"book");
 
return 0;

}