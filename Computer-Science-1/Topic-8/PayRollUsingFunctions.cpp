//Barnaby Gichana
//Date. 10.02.2023
//Desc. program that calculates a worker's pay based on hours worked and pay rate using functions

#include <iostream>
using namespace std;

int calcGrossPay(int, int);
int calcNetPay(int);
void printCheck(int, int);

int main ()
{
  cout << "Use this program to calculate a worker's pay based on his/her hours worked and hourly wages in USD ($)." << endl;
  cout << "------------------------------------------------------\n" ; // Displaying use of the program for the user

  // Declare variables
  int hours;
  int payRate;
  int netPay;
  int grossPay;
  char option = 'y';

  // While loop enables the user to restart the program
  while(option == 'y' || option == 'Y')
    {
      // Populate the data
      cout << "\nEnter hours worked: ";
      cin >> hours;
      cout << "Enter hourly wages: ";
      cin >> payRate;
    
      grossPay = calcGrossPay(hours, payRate);
      netPay = calcNetPay(grossPay);
        printCheck(netPay, grossPay);

      // Asking the user if the program should start again
      cout << endl << "\nWould you like to print another check? (Y/N): ";
      cin >> option;
      cout << endl << "------------------------------------------------------\n";
    } // Close restart while loop

  cout << "\nThank you for using this program! :)";
  
} // Close main


//***********************************************
//desc: funciton to calc gross pay,             *
//data comes from time card, time clock         *
//***********************************************
int calcGrossPay(int hours, int payRate)
  {
    int grossPay;
    grossPay = hours * payRate;
      return grossPay;
  } // Close calcGrossPay


//***********************************************
//desc: function to calculate net pay by        *
//subtracting  taxes                            *
//***********************************************
int calcNetPay(int grossPay)
  {
    int netPay;
    netPay = grossPay - (grossPay * .25);
      return netPay;
  } // Close calcNetPay


//***********************************************
//desc: function to print the check             *
//***********************************************
void printCheck(int grossPay, int netPay)
  {
    cout << endl << "******************************************************";
    cout << endl << "Gross Pay: $" << grossPay;
    cout << endl << "Net Pay:   $" << netPay;
    cout << endl << "\n Pay to the order of: ________________________________";
    cout << endl << "******************************************************";
  } // Close printCheck