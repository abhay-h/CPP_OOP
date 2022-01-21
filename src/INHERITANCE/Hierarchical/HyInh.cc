// hierarchial inheritance : From 1 base class there are multiple derived class
#include <iostream> 
using namespace std;

class A //single base class
{
    public:
 	int x, y;
 	void getdata()
 	{
   	    cout << "\nEnter value of x and y:\n"; cin >> x >> y;
 	}
};
class B : public A //B is derived from class base
{
    public:
 	void product()
 	{
 	    cout << "\nProduct= " << x * y;
 	}
};
class C : public A //C is also derived from class base
{
    public:
 	void sum()
 	{
        cout << "\nSum= " << x + y;
 	}
};
int main()
{
    B *obj1= new B;          //object of derived class B
    C *obj2= new C;          //object of derived class C
    obj1->getdata();
    obj1->product();
    obj2->getdata();
    obj2->sum();
    return 0;
}