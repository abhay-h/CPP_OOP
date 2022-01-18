//Distructor is used to delete memory used by constructor.
#include<iostream>
#include<string>

class Juice{
    private:
        std::string _FruitName;
    
    public:

        Juice(){
            std::cout << "\t**:Welcome to the Juicy Shop**:\n";

        }

        

        ~Juice(){
            std::cout << "\n\tThanks For checking in:\n";
        }

        void _AskCust(){

            std::cout<<"\tHello! What Fruit juice You like ? "<<std::endl;
            std::getline(std::cin, _FruitName);
            std::cout << "\t Here is your " <<"" <<_FruitName<<" juice,Have fun !";

        }
};


int main(int argc, char** argv) {

Juice Shop1;

Shop1._AskCust();


return 0;
}

 
 