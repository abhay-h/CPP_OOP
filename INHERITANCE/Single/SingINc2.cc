#include <iostream>
#include <fstream>

class Education
{
protected:
    std::string School_Type;
    int _Graduation_Time;

public:
    void _GetInfo(std::string S_type, int _Gradtime)
    {
        this->School_Type = S_type;
        this->_Graduation_Time = _Gradtime;
    }
};

 

class Info_Stroage : public Education
{ 
    public:

    void _Setinfo()
    {
       
        std::cout << " Saving info to a text document: ";

        std::ofstream OpenF;
        OpenF.open("Sampleinfo.txt");
        if (!OpenF)
        {
            std::cout << "Error while creating the document" << std::endl;
        }
        else
        {
            OpenF <<"School type = " <<  School_Type << " "<<"Graduation period = "<< _Graduation_Time;
            std::cout << "Document created successfully" << std::endl;
        }
        OpenF.close();
   }
};

 



int main(int argc, char **argv)
{

    
    Info_Stroage Usa;
    Usa._GetInfo("Arts",3);
    Usa._Setinfo();

    return 0;
}

   