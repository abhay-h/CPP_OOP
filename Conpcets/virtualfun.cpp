#include<iostream>
#include<string>


class Animal{
    public:
        std::string name = "animal";
        
      virtual void display(){
        std::cout <<"From base "<< name << std::endl;
    }

  virtual void show(){
        std::cout <<"####**ll####"<<std::endl;
    }

};

class Dog : public Animal{
    public:
    void display(){
            std::cout << "This is a dog and it is an "  << name << std::endl;
            
    }
    
    
};
class Cat : public Animal{
    public:
    void display(){
            std::cout << "This is a cat and it is an "  << name << std::endl;
    }
    
};


int main(int argc, char** argv) {

Dog D1;
 Animal *Ptr= &D1;

Ptr->display();
Ptr->show();

// with the help of pointer of derived class we can call membered function of base class 
return 0;
}