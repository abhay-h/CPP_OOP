#include<iostream>
 #include<string>
 class Music{

    private:
        std::string MusicType ="jazz";
        float Length;

    public:

    Music(){
        Length= 11.913;
    }

   Music(Music &ref){
        std::cout << "**copy constructor invoked** "<< std::endl;
            Length= ref.Length;
            MusicType = ref.MusicType;
    } 
    
    void show(){
        std::cout << "length = " << Length << std::endl;
        std::cout << "MusicType = " << MusicType << std::endl;
    }
    ~Music(){}       
};


 int main(int argc, char** argv) {

     Music X;
     X.show(); 
    Music Z(X); 
     Z.show(); 
     Music Q = X;

 return 0;
 }  

