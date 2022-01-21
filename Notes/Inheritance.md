        👪 Inheritance

        * Inheritance is a concept in whihc a class is derived from a parent class

        Note : Parrent Class = Base Class
                Child  Class = Derived Class


    🏙️ Types of Inheritance

    1) Single Inheritance
    2) Multilevel Inheritance
    3) Hierarchial Inheritance
    4) Hybrid Inheritance
    5) Multiple Inheritance


🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁🪁

    
    🎀 Single Inheritance : (Easy among all )

                In this type of inheritance there is only one child or derived class to a parent or base class



     //   Code Example of Single Inheritance :
        
        class Libaray { // Base/parent class
                public:
                string BookName;
                int TotalBooks;

        };

        class Storybooks : public Human(){ //Child/Derived class

                void _Display(){
                        cout << " welcome to libaray";
                }
        }

 
   
 
 
        🧺
        🍎🥭

        Multiple Inheritance , is type of inheritance in which a class inherits from multiple class

        for eg : Class A, Class B, Class C, Class D

         Here Class D can inherit from Class A and Class C





        🧺
        🍇
        🍈
        🍉
        🍋
        
         Multilevel Inheritance : type of inheritance in which a class inherits from a derived class 

         for eg : Class A(Base class), Class B, Class C, Class D

         Here  Class D is inherit Class C , Class C inherits from Class B and Class B inherits from class A


         Hybrid Inheritance : type of inheritance in which there is combination of different types of inheritance

         for eg : Class A, Class B, Class C, Class D

        Here   Class B inherits from Class A and Class  C inherits from Class A and D