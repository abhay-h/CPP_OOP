#include<iostream>
#include <fstream>

class SDATA
{
private:
    std::string _DocName;
    int _DocSize;
public:
    SDATA();


        void _DATAstore(){

           std::fstream _SData("Data.txt");
            _SData<<_DocName << " " << _DocSize;
            _SData.close();
        }
     
     void _ReadData(){
         std::cout << "\n";
        std::fstream _SData("Data.txt");
         _SData.close();
     }
};

SDATA::SDATA()
{
    std::cout<<"\t*********** Hello***********";
    std::cout<<"\n\tEnter Name of the document : ";
    std::getline(std::cin,_DocName);
    std::cout<<"\n\tEnter size of the document : ";
    std::cin >>_DocSize;
}

int main(int argc, char** argv) {

SDATA Usr1;
Usr1._DATAstore();
Usr1._ReadData();
return 0;
}