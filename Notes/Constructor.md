    🌗  Constructor is a special method which is invoked automatically at the time of object creation. 
    
    👍It is used to initialize the data members of new object generally. 
    
    👍The constructor in C++ has the same name as class or structure

    🍎Another constructor can be made ,  it can be parameterized .


    class  Car{
        private: 
            int tyers;
            string carName;

        public: 

            Car(){
                cout <<"Constrcutor called ";
            }
    };

    main(){
        Car Driver1;
    }