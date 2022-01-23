// Inheritance in which base class has a derived class and derived classes have another derived class

/*
    │Base class│

          ↓
    │Derivied class 1│

          ↓

    │Derivied class 2│
            ↓

    │Derivied class 3│


 Here There is a base class and class 1 is derived class from base,derived class 2 is derived from derived class 1 .................................................

*/

#include <iostream>

class Team
{
      public:
      int PlayerCount;
      void CountTaken()
      {
            std::cout << "Enter Player count " << std::endl;
            std::cin >> PlayerCount;
      }
};

class Games : public Team
{
    public:
    std::string GameName;
      void AskGame()
      {
            std::cout << "What game is it ? " << std::endl;
            std::cin >> GameName;
      }
};

class Votes : public Games
{
private:
      int Votes;

public:
      void TakeVotes()
      {
            std::cout << "How many players want to play the game ? " << std::endl;
            std::cin >> Votes;
      }
      void Decisions(){
              

            if(Votes <=5){
                  std::cout << "Everyone back to classroom ";
            }
            else if (PlayerCount <=8){
                  std::cout << "Everyone back to classroom ";
            }
             
      }
};

int main(int argc, char **argv)
{
      Votes Inp;
      Inp.CountTaken();
      Inp.AskGame();
      Inp.TakeVotes();
      Inp.Decisions();
       

      return 0;
}