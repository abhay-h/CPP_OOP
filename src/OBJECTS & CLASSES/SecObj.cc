#include<iostream>
#include<string>

class Students {
    private:

    std::string _StudentName;
        int studentNumber;
        float Marks;


     public:

        void _ShowStudInfo(){
           
            std::cout <<_StudentName << std::endl;
            std::cout << studentNumber <<std::endl;
            std::cout << Marks << std::endl;
        }


        Students(){
            std::cout << "Enter sute Information Name ,StdNumber ,MAKRS "<<std::endl;
              std::getline(std::cin,_StudentName);std::cin>>studentNumber;std::cin>>Marks;
        }
};

int main(int argc, char** argv) {

    Students * Finn = new Students();
    Finn->_ShowStudInfo();

return 0;
}