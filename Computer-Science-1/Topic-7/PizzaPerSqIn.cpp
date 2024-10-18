//Barnaby Gichana
//Date. 09.27.2023
//Desc. program that compares two pizzas and determines the better deal based on the total area of the pizza

#include <iostream>
using namespace std;

int main()
{
  // Declaring the variables
  char restart = 'y';
  char option = 'y';
  double radius;
  double PI = 3.1415927;
  double areaRound;
  double width;
  double length;
  double areaRect;
  double price1;
  double price2;
  double pricePerSqIn1;
  double pricePerSqIn2;

  // Instructions for the user
  cout << "Use this program to determine the better deal between two pizzas.\nNote! Units are measured in inches.\n\n";

  // While loop that restarts the program at the user's command
  while(restart == 'y' || restart == 'Y')
    {
      //********************************************************************************
      //Calculate the value of PIZZA 1
      //********************************************************************************
      cout << "_______\nPIZZA 1\n\nIs the pizza round? (Y/N): ";
      cin >> option;
      cout << "Enter the price of the pizza: $";
      cin >> price1;
    
      if(option == 'y' || option == 'Y')
      {
        cout << "Enter the radius of the pizza: ";
        cin >> radius;
        areaRound = (PI * radius * radius);
        cout << endl << "Area of Pizza 1: " << areaRound << endl << endl;
        pricePerSqIn1 = price1/areaRound;
        cout << "Price per square inch: $" << pricePerSqIn1 << endl;
      }
        
      else
      {
        cout << endl << "Assuming that the pizza is rectangular" << endl;
        cout << "Enter the width of the pizza: ";
        cin >> width;
        cout << "Enter the length of the pizza: ";
        cin >> length;
        areaRect = width * length;
        cout << endl << "Area of Pizza 1: " << areaRect << endl << endl;
        pricePerSqIn1 = price1/areaRect;
        cout << "Price per square inch: $" << pricePerSqIn1 << endl;
      }
    
      //********************************************************************************
      //Calculate the value of PIZZA 2
      //********************************************************************************
      cout << endl << endl << "_______\nPIZZA 2\n\nIs the pizza round? (Y/N): ";
      cin >> option;
      cout << "Enter the price of the pizza: $";
      cin >> price2;
    
      if(option == 'y' || option == 'Y')
      {
        cout << "Enter the radius of the pizza: ";
        cin >> radius;
        areaRound = (PI * radius * radius);
        cout << endl << "Area of Pizza 2: " << areaRound << endl << endl;
        pricePerSqIn2 = price2/areaRound;
        cout << "Price per square inch: $" << pricePerSqIn2 << endl;
      }
        
      else
      {
        cout << endl << "Assuming that the pizza is rectangular" << endl;
        cout << "Enter the width of the pizza: ";
        cin >> width;
        cout << "Enter the length of the pizza: ";
        cin >> length;
        areaRect = width * length;
        cout << endl << "Area of Pizza 2: " << areaRect << endl << endl;
        pricePerSqIn2 = price2/areaRect;
        cout << "Price per square inch: $" << pricePerSqIn2 << endl;
      }
    
      //********************************************************************************
      //Compare the value of the two pizzas
      //and display the better deal
      //********************************************************************************
      cout << endl << "---------------------------------------------" << endl << endl;
    
      if(pricePerSqIn1 > pricePerSqIn2)
        {
          cout << "Better Deal:  PIZZA 2";
        }
    
      else if(pricePerSqIn1 < pricePerSqIn2)
        {
          cout << "Better Deal:   PIZZA 1";
        }
    
      else
        {
          cout << "Better Deal:  none\n\n   PIZZA 1  the same price as  PIZZA 2";
        }

      cout << endl << endl << "---------------------------------------------" << endl << endl;
      // End of processing

      // Asking the user to restart the program
      cout << "\n\nWould you like to resart the program? (Y/N): ";
      cin >> restart;
      cout << "\n\n";
    } // Close while loop

  cout << endl << "Thank you for using this program! :)";
  
  return 0;
} // Close main