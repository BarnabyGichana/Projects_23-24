//Barnaby Gichana
//Date. 10.02.2023
//Desc. program the lets the user play rock paper scissors against the computer

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
  // Declare variables
  int userInput;
  int computerInput;
  int uScore = 0;
  int cScore = 0;

  unsigned seed = time(0);
  srand(seed);



  char option = 'y';
  while(option == 'y' || option == 'Y')  // while loop to restart the program
    {
      //Populate variables;
      cout << "Select your weapon.\n1) Rock\n2) Paper\n3) Scissors" << endl;
      cout << "Your selection (1/2/3): ";
      cin >> userInput;

      computerInput = rand()%3 + 1;
      
      //Process and display
      if(userInput < 1 || userInput > 3)
      {
        cout << "Invalid Choice!";
      }
      else if(userInput == 1 && computerInput == 2)
      {
        cout << "You Lose! Computer's paper wrapped your rock.";
        cScore++;
      }
      else if(userInput == 2 && computerInput == 3)
      {
        cout << "You Lose! Computer's scissors cut your paper.";
        cScore++;
      }
      else if(userInput == 3 && computerInput == 1)
      {
        cout << "You Lose! Computer's rock smashed your scissors.";
        cScore++;
      }
      else if(userInput == 1 && computerInput == 3)
      {
        cout << "You Win! Your rock smashed the computer's scissors.";
        uScore++;
      }
      else if(userInput == 2 && computerInput == 1)
      {
        cout << "You Win! Your Paper wrapped the computer's rock.";
        uScore++;
      }
      else if(userInput == 3 && computerInput == 2)
      {
        cout << "You Win! Your scissors cut the computer's paper.";
        uScore++;
      }
      else
      {
        cout << "Draw! You and the computer selected the same weapon.";
      }

      cout << " Try Again? (Y/N): ";  // asking the user to restart the program
      cin >> option;
      cout << endl;
      
    } // Close restart while loop
  cout << endl << " User Score: " << uScore << "  Computer score: " << cScore << endl << endl << "Thank you for using this program! :)";
} // Close main