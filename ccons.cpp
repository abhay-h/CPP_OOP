 #include<iostream>
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

 