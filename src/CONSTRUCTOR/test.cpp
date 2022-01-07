#include<iostream>
#include<string>


void Reps(int reps,int Num,int Qnt){
    
    while (Num != reps){
    std::cout << "Num:"<<Qnt <<"= "<< Num << std::endl;
    ++Num;
    ++Qnt;
    
      }
     }
int main(int argc, char** argv) {

int reps,Num = 0 , Qnt = 1,SDUJ;
std::cout << "Enter a number of repetitions :  " << std::endl;
std::cin >> reps;
Reps(reps,Num,Qnt);

std::cout <<"-------------------------------->This is test<--------------------------------"<< std::endl;
return 0;
}
