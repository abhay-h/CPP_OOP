// Operator overloading helps in User defined datatypes and

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }

     void operator -- () {
        --value;
    }
    
    

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1; // Count will become 6
    ++count1;// Count will become 7
    --count1;// Count will become 6

    count1.display();
    return 0;
}