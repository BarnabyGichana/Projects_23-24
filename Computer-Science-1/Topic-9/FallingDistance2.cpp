//Barnaby Gichana
//Date. 10.13.2023
//Desc. a program that determines and displays the distance an object falls in a specific time period using a single function.

#include <iostream>
#include <limits>
using namespace std;

// Declaring the falling distance function
double fallingDistance(double, double);

int main()
{
  // Displaying the purpose of the function
  cout << "Use this program to determine and display the distance (meters) that an object falls in a specific time period (seconds).\n";
  
  // Declare variables for distance, gravity, and time respectively
  double d, g = 9.8, t;
  char option = 'y';

  // While loop that enables the user to restart the program
  while (option == 'y' || option == 'Y')
    {
      // Asking the user to enter the time in seconds
      cout << "\nEnter the time in seconds: ";
      while (!(cin >> t))
      {
          // If the input is not valid, clear the failbit and ignore the remaining characters
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          cout << "Invalid input. Please enter a numerical value for time: ";
      }
    
      // Calling the falling distance function
      d = fallingDistance(g, t);
      
      // Displaying the distance the object falls
      cout << "The object fell for " << d << " meters.\n";

      // Asking the user to restart the program
      cout << "\nWould you like to restart the program? (Y/N): ";
      cin >> option;
    } // Close the while restart loop 

  // Thanking the user
  cout << "\n\nThank you for using this program! :)";
}// Close main function


//**********************************************************
// Defining the falling distance function which calculates *
// the distance (in meters) an object falls in a specific  *
// time period (seconds)                                   *
//**********************************************************
double fallingDistance(double g = 9.8, double t = 0)
{
  // Declare variable for distance
  double d;

  // Formula that calculates the distance
  d = 0.5 * g * t * t;
  // Returning distance to the main function
  return d;
}// Close falling distance function