//Barnaby Gichana
//Date. 09.13.2023
//Desc. two-value calculator that does not allow any division by zero

#include <iostream>
using namespace std;

int main ()
{
    //Declare
    double num1;
    double num2;
    double total;
    char option = 'y';

    cout << "Use this program to divide two numbers.\nNote that you cannot divide any number by zero (0)!\n\n";//instructions for the user

    //Populate
    while(option == 'y' || option == 'Y')
    {
      cout << "Enter number 1: ";
      cin >> num1;
      cout << "Enter number 2: ";
      cin >> num2;

      //Process
        while(num2 == 0)
        {
          cout << "\n\nCan't divide by zero \n";
          cout << "Enter a non-zero value: ";
          
          cin >> num2;
        }//Close while

      //Display
      total = num1/num2;
      cout << "\n\nTotal: " << total << " \n\n";

      //Asking the user to restart the program
      cout << "Continue Y/N: ";
      cin >> option;
      cout << "\n\n";
      
    }//Close while
  
}//Close main