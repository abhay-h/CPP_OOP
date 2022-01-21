 #include<iostream>

 template <typename CT>
 class Weight{
     private:
        CT kg;

    public:

        void setdata(CT x){
            this->kg = x;
        }
        CT getdata(){
            return this->kg;
        }


 };

 int main(int argc, char** argv) {
     Weight <int> obj1;
     Weight <float> obj2;
     obj1.setdata(51);
     obj2.setdata(49.557f);
     std::cout << "value is " << obj1.getdata() << std::endl;
     std::cout << "value is " << obj2.getdata() << std::endl;
     
 return 0;
 }
