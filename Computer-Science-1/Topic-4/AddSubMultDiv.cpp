//Barnaby Gichana
//Date. 09.18.2023
//Desc. prog. that adds, subtracts, multiplies, or divides two numbers

#include <iostream>
using namespace std;

int main()
{
  //Declare
  double num1, num2;
  char op1;
  char op2 = 'y';

  while(op2 == 'y' || op2 == 'Y')//Loop that restarts the program after the operation is calculated
    {
      //Populate
      cout << "State operation (+,-,/,*): ";//Only accepted values are (+,-,*,/)
      cin >> op1;
      cout << "\nEnter the first number: ";
      cin >> num1;
      cout << "\nEnter the second number: ";
      cin >> num2;
      cout << endl << endl;
  

      //Process & Display
      switch(op1)
        {
          case '+':
            //Addition
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
      
          case '-':
            //Subtraction
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

          case '*':
            //Multiplication
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

          case '/':
            //Division
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

          default:
            //Displays error if any character other than +,-,*,/ is entered
            cout << "\nError! Operation is incorrect.";
            break;
          
        }//Close switch
  
      //Asking the user to restart the program
      cout << "\nContinue Y/N: ";
      cin >> op2;
      cout << "\n";
      
    }//Close while
}//Close main