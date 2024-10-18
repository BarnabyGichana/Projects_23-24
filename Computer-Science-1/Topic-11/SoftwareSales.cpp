//Barnaby Gichana
//Date. 10.30.2023
//Desc. program that asks the user to enter the number of packages purchased. The program sends the information to a function  called "calcDiscount" then displays the amount of the discount (if any) and the total amount of the purchase after the discount.

#include <iostream>
using namespace std;

void calcDiscount(int, int);

int main()
{
  // Declare variables
  int packages;
  int price = 99;
  char option = 'y';

  // User instructions
  cout << "Welcome to the official Legitimate Tech Company LTD. discount calculator program. Kindly follow the prompts that appear on your screen.\n\n";

  // Restart loop
  while(option == 'y' || option == 'Y')
    {
      // Populate
      cout << endl;
      cout << "Price per package: $99\n";
      cout << "Enter the number of packages purchased: ";
      cin >> packages;
      cout << endl;
    
      calcDiscount(packages, price);

      // Ask user to restart the program
      cout << "\nWould you like to restart the program? (Y/N): ";
      cin >> option;
      cout << endl;
    }

  // Thanking the user
  cout << "Thank you for using this program! :)\n";
  return 0;
}

//*********************************************************
// Function: calcDiscount                                 *
//*********************************************************
void calcDiscount(int packages, int price)
{
  // Declare discount variable
  int discount;

  // Calculating the discount
  if(packages < 10)
  {
    discount = 0;
  }
  else if(packages >= 10 && packages <= 19)
  {
    discount = (price * 0.2);
  }
  else if(packages >= 20 && packages <= 49)
  {
    discount = (price * 0.3);
  }
  else if(packages >= 50 && packages <= 99)
  {
    discount = (price * 0.4);
  }
  else if(packages >= 100)
  {
    discount = (price * 0.5);
  }

  // Display bill and discount
  cout << "Gross bill: $" << price * packages << endl;
  cout << "Your discount: $" << discount << endl;
  cout << "Bill after discount: $" << (price * packages) - discount << endl;
}