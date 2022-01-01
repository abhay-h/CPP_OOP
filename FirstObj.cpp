 #include<iostream>
 #include<string>
 using namespace std;

  class Fib{
       public:  //By default private if no access specfier is declared
      string name;
      int number;

  public:
      void _Set_Get(){
             
           cout << "enter a name :> ";
            cin >>  name;
           cout << "\nenter a number :> ";
           cin >> number;
            cout <<this-> name<<" :Is your name\n";
           cout << this->number<<" :Is your number";
      }  
  };


 int main() {

      Fib Student1; // object
    Student1._Set_Get();

    return 0;

 } 
