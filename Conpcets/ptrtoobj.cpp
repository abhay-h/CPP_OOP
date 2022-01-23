// pure virtual function can be achieved via , setting function value to 0
 #include<iostream>
 class Animal{
    public:
    std::string Aname;
       virtual void GetName() = 0; // pure virtual function

 };
 class Dog : public Animal{
     public:
     void GetName(){
         std::cout<<"Enter Dog name "<<std::endl;
         std::cin >> Aname;
         std::cout<<"The Dog name is "<<Aname<<std::endl;
     }
 };
 
 class Cat : public Animal{
     public:
     void GetName(){
         std::cout<<"Enter Cat name "<<std::endl;
         std::cin >> Aname;
         std::cout<<"The Cat name is "<<Aname<<std::endl;
     }
 };
 int main(int argc, char** argv) {
  Dog D1;
  Cat C1;
  D1.GetName();
  std::cout << "\n";
  C1.GetName();
   return 0;
 }