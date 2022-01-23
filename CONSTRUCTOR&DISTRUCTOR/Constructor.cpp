#include<iostream>
#include<string>
using namespace std;
class Bank
{
public:
    std::string _Ifsc , _Bank_Address; 
    int _ZipCode;
    
    Bank(std::string ifsc, std::string address ,int zipc){

        this->_Ifsc = ifsc;
        this->_Bank_Address = address; // can be read as , our _Bank_Address is this address
        this->_ZipCode = zipc;
    }

};

int main(int argc, char** argv) {

Bank Goa("Ibk100","Highway,Near lol",41841);
 
Bank cn("I8bk100","Highway,Near lol",412841);

  
 char choice = 'Y';

std::cout << "\t Do you need bank information ? Y/n:";
std::cin>> choice;
 if(choice == 'Y'||choice == 'y'){
 
         std::cout << Goa._Ifsc << std::endl;
          std::cout << Goa._Bank_Address << std::endl;
          std::cout << Goa._ZipCode << std::endl<< std::endl;
          
          

         std::cout << cn._Ifsc << std::endl;
          std::cout << cn._Bank_Address << std::endl;
          std::cout << cn._ZipCode << std::endl;     
 }

else{
    std::cout << "\n Ok you will be kicked out :) ";
}
return 0;
}
