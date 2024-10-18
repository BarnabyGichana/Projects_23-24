//Barnaby Gichana
//Date. 09.25.2023
//Desc. program that generates 3 random numbers between 1-10, 1-100, and 1-1000 respectively

#include <iostream>
#include <cstdlib>     // rand and srand
#include <ctime>

using namespace std;

int main ()
{
  char option = 'y';

  // Display the purpose of the program
  cout << "Use this program to generate three random numbers in three different ranges.\n" << endl;
  
  while(option == 'y' || option == 'Y')
    {
      unsigned seed = time(0);     // Seeding random numbers
      srand(seed);                 // Assigning seed to srand
    
      // Display the 3 random numbers
      cout << "1 -> 10:   "   << rand()%10 + 1    << endl;    //1-10
      cout << "1 -> 100:  "   << rand()%100 + 1   << endl;    //1-100
      cout << "1 -> 1000: "   << rand()%1000 + 1  << endl;    //1-1000

      //Asking the user to restart the program
      cout << "\nStart again (Y/N): ";
      cin >> option;
      cout << "\n\n";
        
    } // Close while

  cout << "Thank you for using this program! :)\n";
  return 0;
  
} // Close main