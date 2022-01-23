// Helps to make your own generic fun

#include<iostream>
using namespace std;
 
template <typename T> 

 T product(T x,T y)
{
    return (x*y);
}

int main(int argc, char** argv) {
    
    cout << product<int>(77,81)<< std::endl;
    cout << product<float>(17.51f,81.98f)<< std::endl;
    cout << product<double>(44.555d,81.5521d)<< std::endl;
 
  
return 0;
}
 
 // Note if we dont  call template in main function then it will never created

 // ie template is created when called :) 