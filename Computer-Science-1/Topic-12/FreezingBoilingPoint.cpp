//Barnaby Gichana
//Date. 11.06.2023
/*Desc. a program that ask the user to enter a temperature then shows all the substances that will freeze at that temperature, and all that will boil at that temperature.
For example if the user enters -20, the program should report that water will freeze and oxygen will boil at that temperature.*/

#include <iostream>
using namespace std;

int main()
{
  // Declare variables
    double temp = 0;         // Temperature variable
    char option = 'y';       // Restart option variable

  while (option == 'y' || option == 'Y')       // Restart loop
    {
      // Populate variable
        cout << "Enter temperature in Farenheit: ";
        cin >> temp;
        cout << "\nAt " << temp << " F these substances will either "
        <<"freeze or boil. \n\n";
    
      // Display freezing elements
        if(temp <= 32)                         // Water
        {
          cout << "\n Freeze: \n";
          cout << "____________\n";
          cout << "\n Water" << "\n";
  
          if(temp <= -38)                      // Mercury
          {
            cout << "\n Mercury" << endl;

            if(temp <= -173)                   // Ethyl Alcohol
            {
              cout << "\n Ethyl Alcohol" << endl;

              if(temp <= -362)                 // Oxygen
              {
                  cout << "\n Oxygen" << endl;
              }
            }
          }
          cout << endl;
        }
    
      // Display boiling elements
        if(temp >= -306)                       // Oxygen
        {
          cout << "\nBoil: \n";
          cout << "_________\n";
          cout << "\n Oxygen" << endl;
          if(temp > 172)                       // Ethyl Alcohol
          {
            cout << "\n Ethyl Alcohol" << endl;

            if(temp >= 212)                    // Water
            {
              cout << "\n Water" << endl;

              if(temp >= 676)                  // Mercury
              {
                  cout << "\n Mercury" << endl;
              }
            }
          }
        }

      // Ask user to restart the program
      cout << "\nWould you like to restart the program? (Y/N): ";
      cin >> option;
      cout << "\n";
    }

  // Thank the user
  cout << "\nThank you for using this program! :)\n";
  return 0;
}