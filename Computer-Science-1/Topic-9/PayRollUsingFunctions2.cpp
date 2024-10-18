//Barnaby Gichana
//Date. 10.13.2023
//Desc. program that calculates and displays a worker's pay based on hours worked and pay rate using three functions

#include <iostream>
#include <limits>
using namespace std;

double calcGrossPay(double, double);
double calcNetPay(double);
void printCheck(double, double);

int main ()
{
  // Displaying use of the program for the user
  cout << "Use this program to calculate a worker's pay based on hours worked and hourly wages in USD ($)." << endl;
  cout << "------------------------------------------------------\n" ;

  // Declare variables
  double hours, payRate, netPay, grossPay;
  char option = 'y';

  // While loop enables the user to restart the program
  while(option == 'y' || option == 'Y')
    {
      // Asking the user to enter hours worked and hourly wages
        cout << "\nEnter hours worked:       ";
        while (!(cin >> hours))
        {
            // If the input is not valid, clear the failbit and ignore the remaining characters
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a numerical value for hours worked: ";
        }
        cout << "Enter hourly wages (USD): ";
        while (!(cin >> payRate))
        {
            // If the input is not valid, clear the failbit and ignore the remaining characters
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a numerical value for hourly wages: ";
        }

      // Calling the gross pay, net pay, and print check functions
      grossPay = calcGrossPay(hours, payRate);
      netPay = calcNetPay(grossPay);
        printCheck(grossPay, netPay);

      // Asking the user if the program should start again
      cout << endl << "\nWould you like to print another check? (Y/N): ";
      cin >> option;
      cout << endl << "------------------------------------------------------\n";
    } // Close restart while loop

  cout << "\nThank you for using this program! :)";

} // Close main


//***************************************************
// defnining funciton to calc gross pay,            *
// data comes from time card, time clock            *
//***************************************************
double calcGrossPay(double hours, double payRate)
  {
    // Declaring variable for gross pay
    double grossPay;
    grossPay = hours * payRate;
      return grossPay;
  } // Close calcGrossPay


//***************************************************
// defining function to calculate net pay by        *
// subtracting  taxes                               *
//***************************************************
double calcNetPay(double grossPay)
  {
    // Declaring variable for net pay
    double netPay;
    netPay = (grossPay - (grossPay * 0.25));
      return netPay;
  } // Close calcNetPay


//***************************************************
// defining function to print the check             *
//***************************************************
void printCheck(double grossPay, double netPay)
  {
    cout << endl << "******************************************************";
    cout << endl << "Gross Pay: $" << grossPay;
    cout << endl << "Net Pay:   $" << netPay;
    cout << endl << "\n Pay to the order of: _______________________________";
    cout << endl << "******************************************************";
  } // Close printCheck