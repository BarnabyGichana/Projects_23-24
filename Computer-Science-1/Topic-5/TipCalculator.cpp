//Barnaby Gichana
//Date. 20.09.2023
//Desc. program that computes the tax and tip on a restaurant bill for a patron.

#include <iostream>
using namespace std;

int main()
{
  cout << "Use this program to compute the tax and tip on a restaurant bill for a patron.\nNote! Results are displayed in dollars.\nTax = 6.75%\nTip = 15% after tax\n"; //displaying instructions for the user

  //Declaring the values
  float mealCost;
  float tax;
  float costAfterTax;
  float tip;
  float totalCost;
  char option = 'y';

  while(option == 'y' || option == 'Y') //enables the program to restart itself
    {
      //Populate
      cout << endl << "Enter the cost of the meal: ";
      cin >> mealCost; //user enters the meal cost

        //Processing the information
        tax = mealCost * 0.0675;   //calculating tax 6.75%
        costAfterTax = mealCost + tax;   //calculating cost after tax
        tip = costAfterTax * 0.15;   //calculating tip 15%
        totalCost = costAfterTax + tip;  //calculating the total cost
      
        //Displaying the results
        cout << endl << "Meal cost: " << mealCost;
        cout << endl << "Tax amount: " << tax;
        cout << endl << "Tip amount: " << tip;
        cout << endl << "\nTotal bill: " << totalCost;

        cout << endl << "---------------------------------"; //line to end the previous receipt

      
      //Asking the user if the program should restart or not
      cout << "\n\nContinue Y/N: ";
      cin >> option;
      cout << "\n";
      
      cout << "---------------------------------"; //line to start the next receipt
      cout << "\n";
        
    }//Close while

  cout << endl << "Thank you for using this program!  :)";
  
}//Close main