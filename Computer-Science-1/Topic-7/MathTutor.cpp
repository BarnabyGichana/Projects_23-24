//Barnaby Gichana
//Date. 09.27.2023
//Desc. program that can be used as a math tutor for a student

#include <iostream>
#include <ctime>      // rand & srand
#include <cstdlib>

using namespace std;


int main()
{
  // Display the purpose and instructions of the program
  cout << "Use this program to practice random addition and subtraction problems for numbers between 1 and 1000.\n\nUse the Enter key to display the answer." << endl << endl;
  
  char restart = 'y';

  // While loop to restart the program upon request from the user
  while(restart == 'y' || restart == 'Y')
    {
      unsigned seed = time(0);   // Seeding random numbers
      srand(seed);               // Assigning seed to srand
    
      // Variable that determines the sign of the function by generating either 0 or 1 (+ or -)
      int funcSign = rand()%2;
      // Variables for the two random numbers
      int num1 = rand()%1000 + 1;
      int num2 = rand()%1000 + 1;
    
      int option = '=';
    

      //**************************************
      //addition function
      //**************************************
      if(funcSign == 0)
      {
        // Display the addition problem
        cout << "   ";
        cout << num1 << endl;  // First random number
        cout << " + ";
        cout << num2 << endl;  // Second random number
        cout << "_______" << endl;
    
        // Wait for a key to be pressed and display the answer
        cin.get();
        cin.ignore();
        cout << num1 + num2;
        
      } // Close if

        
      //*************************************
      //subtraction function
      //*************************************
      else
      {
        // Display the subtraction problem
        cout << "   ";
        cout << num1 << endl;  // First random number
        cout << " - ";
        cout << num2 << endl;  // Second random number
        cout << "_______" << endl;
    
        // Wait for a key to be pressed and display the answer
        cin.get();
        cin.ignore();
        cout << num1 - num2;
        
      } // Close else
    
      //Asking the user to restart the program
      cout << "\n\nTry another problem (Y/N): ";
      cin >> restart;
      cout << "\n\n";
      
    } // Close while

  cout << "Thank you for using this program! :)";

  return 0;
} // Close main