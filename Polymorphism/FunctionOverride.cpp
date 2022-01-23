//Function Over Riding 

#include<iostream>

class Shapes{
protected:
         int Height = 4,Width=7,length=9,base=11;
    public:
    virtual void AreaDisplay(){ // Virtual function
        std::cout << "****Area of shapes are *****: "<<std::endl;   
     }
};

class Rectangle: public Shapes{
  protected:
    int Area = length*Width; 
    protected:   
        void AreaDisplay(){
            
            std::cout << "Area of Reactangle is  : "<<Area << std::endl;

        }
};

class Trapezoid: public Shapes{
   protected:
    int Area = (base+base)*Height/2;
    protected:
        void AreaDisplay(){
           
            std::cout << "Area of Trapezoid is : "<<Area << std::endl;
         }
};

class Triangle:public Shapes{
   protected:
   int Area = Height*base/2;
    protected:
    void AreaDisplay(){
        std::cout << "Area of Triangle is : "<<Area << std::endl;
    }
    
};

int main(int argc, char** argv) {
     
        
    Shapes *s; // creating pointer to class Shapes
    Shapes sh; //object of class Shapes
    Rectangle R;
    Trapezoid T;
    Triangle Tr;

    s= &sh; // storing address of object of class Shapes into pointer of class Shapes

    s->AreaDisplay(); //calling virtual function present in Shapes class Shapes

    s = &R; // storing address of object of class Reactangle into pointer of class Shapes

    s->AreaDisplay(); //calling virtual function present in Reactangle class 

    s = &Tr; // storing address of object of class Triangle into pointer of class Shapes

    s->AreaDisplay(); //calling virtual function present in Triangle class

    s=&T; // storing address of object of class Trapezoid into pointer of class Shapes

    s->AreaDisplay(); //calling virtual function present in Trapezoid class


return 0;
}