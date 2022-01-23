#include<iostream>
class Shapes{
    protected:
        int Width,Height;

    public:

        void SetWidth(int width) { 
            this->Width = width;

        }
        void SetHeight(int height) {
            this->Height = height;
        }
};

    class Rectangle: public Shapes{
        public:
        int getArea() { 
            return (Width * Height);
        }
    };

int main(int argc, char** argv) {

    Rectangle S1;

    S1.SetWidth(13);
    S1.SetHeight(8);
    std::cout << "Area of the rectangle is  = " << S1.getArea() << std::endl;

return 0;
}