#include<iostream>
#include<string>


class MyData{

private:

    std::string *name;
    int *Life;

public:
    MyData(std::string Iname, int Ilife){
        name = new std::string;
        Life = new int;

        *name = Iname;
        *Life = Ilife;
}
        void Display(){
            std::cout << "Name : "<<*name<<std::endl;
            std::cout << " ages is "<<*Life << std::endl;
        }
      
      ~MyData(){
          delete name;
          delete Life;
          std::cout << " everything deleted xd ";
      }
    
};
