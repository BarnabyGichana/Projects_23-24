//Barnaby Gichana
//Date. 11.06.2023
//Desc. program that creates a 10 x 10 multiplication table

#include <iostream>
#include <iomanip> //for setw function

using namespace std;

int main()
{
  // Declare variables
    const int tableSize = 10;           // Table size = 10 x 10
    int table[tableSize][tableSize];    // Declaring table as a 2 dimensional array
    char restartOption = 'y';           // Restart option variable

  while (restartOption == 'y' || restartOption == 'Y')  // Restart loop
    {
      // Calculate table values
        for(int i = 1; i <= tableSize; i++)
        {
          for(int j = 1; j <= tableSize; j++)
          {
              table[i-1][j-1] = i * j;                  // Multiplication function
          }
        }
    
      // Display table
        for(int i = 0; i < tableSize; i++)
        {
          for(int j = 0; j < tableSize; j++)
          {
              cout << setw(5) << table[i][j];           // Field width = 5
          }
          cout << endl;
        }

      // Ask user to restart the program
      cout << "\nWould you like to rerun the program? (Y/N): ";
      cin >> restartOption;
      cout << "\n";
    }

  // Thank the user
  cout << "\nThank you for using this program! :)\n";
  return 0;
}