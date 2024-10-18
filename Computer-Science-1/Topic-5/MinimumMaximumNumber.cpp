//Barnaby Gichana
//Date. 09.20.2023
//Desc. prog. to determine the equality or inequality of two numbers

#include <iostream>
using namespace std;

int main()
{
  //Declare
  int num1;
  int num2;
  char option = 'y';

  cout << "Use this program to determine whether two numbers are either 'greater than', 'less than', or 'equal to' each other.\n\n";//displaying the instructions

  while(option == 'y' || option == 'Y')//enables the program to restart itself
  {

    //Populate
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << endl;

      //Process input & Display the results
      if(num1 < num2)
      {
        cout << num1 << " is less than (<) " << num2;
      }//Close if

      else if(num1 > num2)
      {
        cout << num1 << " is greater than (>) " << num2;
      }//Close else if

      else
      {
        cout << num1 << " is equal to (=) " << num2;
      }//Close else

    //Asking the user if the program should restart or not
    cout << "\n\nContinue Y/N: ";
    cin >> option;
    cout << "\n\n";
    
  }//Close while
  
}//Close main