#include<iostream>
#include<string>
using namespace std;
class Universities{

    private:
    std::string UnivNames;
    int _ZipCode;

    public:
    int Getinfo(){
        std::cout << "Enter university name" << std::endl;
        std::cin >> UnivNames;
        std::cout << "Enter university zip code "<< std::endl;
        std::cin >> _ZipCode;
        return 0;
    } 
};

class Usa_University: public Universities{
            
};

class Uk_University: public Usa_University{
    
};




int main(int argc, char** argv) {

Uk_University* Wh = new Uk_University();
Wh->Getinfo();

return 0;
}