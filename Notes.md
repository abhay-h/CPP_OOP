    📚Need of Object Oriented Programming :>

    💥 There are many real life problems which can be solved by functional  programming approach.

    🚁 But it get's complicated to work with data.

    🎀 For example :> ,

            
            void _MyCityHotels{
            string _HotelNames
            int _Rooms
            }

            main ()
            {
                int Customer_Needs;
                string Customer_Choice_Hotel;

                if (Customer_Needs!=_Rooms)
                {
                    printf("!Alas, No results !");
                }
            }

            ❗ See how our code get lenghty and unmanagable after few addtions of lines and after a point it becomes mess.



    🧰 Object Oriented Programming has following concepts which we have to deal with >

        📗 Classes 
        📃 Objetcs
        🏓 Acces Specifiers
        👪Inheritance
        👩‍👩‍👦‍👦Polymorphism
        🔒 Encapsulation
        🆎 Abstraction

🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄🎄                     
🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈



    🏛️ Classes are group of variables and functions.

    ✍ Note :
                1️⃣ Variables declared inside a class are called DATA Members
                2️⃣ Functions declared inside a class are called Member Functions

                📛 Example

                 class School{

                     int _StudentCount;     🍞These are class variables
                     String _SchoolAddress; 🍞


                        void _Input () {   🏹 This is Member Function
                            cin >> _StudentCount;
                            cin >> _SchoolAddress;
                        }
                 }

    🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 🔥 


    🧨 Objects can be created with different ways to
        
        1️⃣ <CLASS NAME > < OBJECT NAME > :
          🍊 Using this type of object initialization the object will be stored in stack memory.

                😄 When you use this type of object initialization , Then to access the data members and member function you will need to use following syntax 

                        <OBJECT NAME> . <DATA MEMBER> or <MEMBER FUNCTION>



        
        2️⃣ <CLASS NAME > * <OBJECT NAME> = new<CLASS NAME> ();
            🍎 Using this type of object initialization the object will be stored in heap memory.

                😄 When you use this type of object initialization , Then to access the data members and member function you will need to use following syntax 

             <CLASS NAME> -> <DATA MEMBER> or <MEMBER FUNCTION>


    