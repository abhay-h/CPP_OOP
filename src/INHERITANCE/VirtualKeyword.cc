#include<iostream>
class Range{

    public:
        virtual void Display(){
            std::cout<<"Early Binding\n";
        }

};

class Factor :public Range{

 void Display(){
        std::cout << "Late/Dynamic Binding \n";
    }
};


int main(int argc, char** argv) {

Range *Ptr, S1;
Factor S2;
Ptr=&S2;

    Ptr->Display();

return 0;
} 
