#include<iostream>
#include<string>
using namespace std;

// class Fib{
//     // public: // By default private if left undeclared
//     string name;
//     int number;

// public:
//     void _Set_Get(){
             
//          cout << "enter name" << endl;
//          cout << "number" << endl;
//          cin >>  name;
//          cin >> number;

//         //  cout << name;
//         // cout << number;
//     }  
// };

class Lol {
    private:
    string sname;

    
    public:
        void _Taker(){

            int _ARRAY[5];
        
            
            for(int i=0; i<5; i++){
                
                cin >>_ARRAY[i];
            }

            for(int i=0; i<5; i++){
                
                cout<<_ARRAY[i];
            }
        }
};

int main(int argc, char** argv) {

    // Fib Student1(11,"Abhay"); // object

    //  Student1._Set_Get();

Lol S;

S._Taker();
   return 0;

} 


