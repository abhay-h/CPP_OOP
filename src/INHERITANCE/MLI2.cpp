#include<iostream>
#include<string>

class School{
    private:
    std::string _School_Name;

    public:

    void Display(){
        std::cout<<_School_Name<<" is schoolname";
    }

    School(){
        std::cout<<"enter school name "<<std::endl;
        std::cin >> _School_Name;   
    }
};

class Std1 : public School{

};
class Std2 : public Std1{
};

int main(int argc, char** argv) {

    School Std2;

    Std2.Display();

return 0;
}