#include<iostream>
#include<string>


class Marks{

    private:

        int total;
        int count;
    
    public:
        Marks(){}
        Marks(int T,int C){
            this->total = T;
            this->count = C;
        }

     friend class Student;
};

class Student{

    public:

        void Display(Marks &a){

            std::cout << "Marks are "<<a.total << std::endl;
            std::cout << "Count is "<<a.count << std::endl;
        }

};


int main(int argc, char** argv) {

    int T,C;
    std::cout << "enter T and C" << std::endl;
    std::cin >> T >> C;

    Marks a(T,C);
    Student b;
    b.Display(a); 
    /* passing object of class Marks as a parameter to function 
    present in class Student*/

return 0;
}