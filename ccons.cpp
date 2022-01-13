/*  #include<iostream>
 #include<string>

class MyClass
{
private:
    std::string name = "Finn";
    int Lv = 718;
public:
 MyClass();
 
    void _ShowInfo(){
        std::cout << "My Fav "<<std::endl;
};
    
    
};
 MyClass:: MyClass()
{
    std::cout << " " << name<< " " <<Lv<< std::endl;
    //  std::cout << "My Fav "<<std::endl;
};
 
  
 int main(int argc, char** argv) {
 
     MyClass Obj1 , Obj2;
     Obj2=Obj1;
 
 return 0;
 }

  */








#include<iostream>
#include<string>


int main(int argc, char** argv) {


int arr []= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(i==10||i==5){
            continue;
        }
        else if(i==12){
            break;
        }
        std::cout << arr[i]<<std::endl;
    }
    

return 0;
}







