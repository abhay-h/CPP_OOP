#include<iostream>
#include<string>

class Task{
    private:
  long long int _Contacts;
    char _Call_Options;
    public:
 
            Task(){
            std::cout<<"Enter a contact number "<<std::endl;
            scanf("%lld",&_Contacts);
            }

        void _WorkQueue(){

            std::cout<<"Do you want call "<< _Contacts<<std::endl;
            while(_Call_Options == 'Y'||_Call_Options == 'y' != 'Y' || 'y'){

                  std::cout<<"\n \t Yes or No: y/n: ";
            std::cin >>_Call_Options;
                
           if (_Call_Options == 'Y'||_Call_Options == 'y'){
                std::cout<<"\tCalling..........";
                exit(0);
          }
           else if (_Call_Options == 'N'||_Call_Options == 'n'){
               std::cout <<"\tExit..........";
                exit(0);
             }

             }
        }      
};  
 
int main(int argc, char** argv) {

 Task Emp1;
 Emp1._WorkQueue();
return 0;
} 