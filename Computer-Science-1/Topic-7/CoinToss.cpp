//Barnaby Gichana
//Date. 20.09.2023
//Desc. prog. that generates a seeded random number between (1-10), (1-100), and (1-1000).

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
  int userGuess;
  int coinToss;
  int score = 0;

  unsigned seed = time(0);
  srand(seed);
  
  int counter = 0;

    char option = 'y';
    while(option == 'y' || option == 'Y')
      {
        int counter = 0;
        
        while(counter < 7)
          {
            coinToss = rand()%2;
            
            cout << "Enter a guess: 0 = heads, 1 = tails: ";
            cin >> userGuess;
            while(userGuess < 0 || userGuess > 1)
            {
              cout << "Invalid choice!: 0 for heads, 1 for tails: ";
              cin >> userGuess;
            }
            if(userGuess == coinToss)
            {
              cout << "You Win!" << endl;
              score++; //Same as 'score = score + 1'
            }
            else
            {
              cout << "You lose..." << endl;
            }
    
            counter++; //Same as 'counter = counter + 1'
            
          } //Close game while loop
  
          cout << endl << " User Score: " << score << "  Computer score: " << (7-score) << endl << endl;

          score = 0;
          cout << "Try Again? Y/N: ";
          cin >> option;
          
      } //Close restart while loop

    cout << "Thank you for using this program! :)";
  
  return 0;
} //Close main