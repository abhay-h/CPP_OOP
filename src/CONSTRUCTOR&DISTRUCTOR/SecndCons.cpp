#include<iostream>
 
class SecCons
{
private:
    std::string SampleText = ":This function is called via constructor :";
public:
    SecCons();
;
};

SecCons::SecCons()
{
    std::cout<<SampleText<< std::endl;
     std::cout<<":Size of is:"<< sizeof(SampleText)<<"Bytes";

}

int main(int argc, char** argv) {

SecCons Test;
return 0;
}