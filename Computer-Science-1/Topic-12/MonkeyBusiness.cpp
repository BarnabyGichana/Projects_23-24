//Barnaby Gichana
//Date. 11.06.2023
/*Desc. program for a local zoo to keep track of how many pounds of food each of the three monkeys eats each day during a typical week. The program stores this information in a two-dimensional 3 X 7 array, where each row represents a different monkey and each column represents a different day of the week. The program first has the user input the data for each monkey.  Then it creates a report that includes the following information:
* Average amount of food eaten per day by the whole family of monkeys.
* The least amount of food eaten during the week by any one monkey.
* The greatest amount of food eaten during the week by any one monkey.
Input validation: this program will not accept negative numbers for pounds of food eaten.*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Declare functions
void displayTotalAverage(int, int, int**);
void displayLeast(int, int, int**);
void displayGreatest(int, int, int**);

int main()
{
  // Declare variables
  const int monkey = 3;                 // Number of monkeys = 3
  const int daysOfTheWeek = 7;          // Number of days in a week = 7
  
  int** dataTable = new int*[monkey];   // Allocate memory for the array of pointers
  
  for (int i = 0; i < monkey; i++)      // Allocate memory for each row (monkey) 
  {
    dataTable[i] = new int[daysOfTheWeek];
  }

  char restartOption = 'y';             // Restart option variable
  char populateDataOption = 'y';        // Data population option variable

  unsigned seed = time(0);              // Random number generator
  srand(seed);

  while (restartOption == 'y' || restartOption == 'Y')     // Restart loop
    {
      // Populate data table array
      cout << "Would you like to manually enter the data? (Y/N): ";
      cin >> populateDataOption;

      // Manual user input system
      if (populateDataOption == 'y' || populateDataOption == 'Y')
      {
        for (int i = 0; i < monkey; i++)
        {
          cout << "\nEnter the amount of food in pounds (lbs), eaten by Monkey " << i + 1 << "\n";
          for (int j = 0; j < daysOfTheWeek; j++)
          {
            cout << "Day " << j + 1 << ": ";
            cin >> dataTable[i][j];                        // Ask user to enter a value

            while (dataTable[i][j] < 0)                    // Input validation: will not accept negative values
            {
              cout << "Invalid Input! Please enter a positive value: ";
              cin >> dataTable[i][j];
            }
          }
        }
      }

      // Randomized input system
      else
      {
        for (int i = 0; i < monkey; i++)
        {
          cout << "\nEnter the amount of food in pounds (lbs), eaten by Monkey " << i + 1 << "\n";
          for (int j = 0; j < daysOfTheWeek; j++)
          {
            cout << "Day " << j + 1 << ": ";
            dataTable[i][j] = rand() % 25 + 1;             // Populate array with random seeded numbers between 1-25
            cout << dataTable[i][j] << endl;
          }
        }
      }
      
      // Call Processing functions
      displayTotalAverage(monkey, daysOfTheWeek, dataTable);
      displayLeast(monkey, daysOfTheWeek, dataTable);
      displayGreatest(monkey, daysOfTheWeek, dataTable);

      // Ask user to restart the program
      cout << "\n\nWould you like to run this program again? (Y/N): ";
      cin >> restartOption;
      cout << "\n";
    }

  // Delete memory
  for (int i = 0; i < monkey; i++)
  {
    delete[] dataTable[i];
  }
  delete[] dataTable;
      
  // Thank the user
  cout << "\nThank you for using this program! :)\n";
  return 0;
}

//**********************************************************
// Funciton name: displayTotalAverage                      *
//**********************************************************
void displayTotalAverage(int monkey, int daysOfTheWeek, int** dataTable)
{
  int total = 0;                                 // Calculate total
  for (int i = 0; i < monkey; i++)
  {
    for (int j = 0; j < daysOfTheWeek; j++)
    {
      total += dataTable[i][j];
    }
  }

  // Display total and average values
  cout << "\nTotal: " << total << " lbs";
  cout << "\nDaily Average: " << total / (monkey * daysOfTheWeek) << " lbs";
}

//**********************************************************
// Funciton name: displayLeast                             *
//**********************************************************
void displayLeast(int monkey, int daysOfTheWeek, int** dataTable)
{
  int least = dataTable[0][0];                   // Variable for least value
  for (int i = 0; i < monkey; i++)               // Assigning highest value to variable 'least'
  {
    for (int j = 0; j < daysOfTheWeek; j++)
    {
      if (dataTable[i][j] < least)
      {
        least = dataTable[i][j];
      }
    }
  }
  
  cout << "\nLeast: " << least << " lbs";        // Display least value
}

//**********************************************************
// Funciton name: displayGreatest                          *
//**********************************************************
void displayGreatest(int monkey, int daysOfTheWeek, int** dataTable)
{
  int greatest = dataTable[0][0];                // Variable for greatest value
  for (int i = 0; i < monkey; i++)               // Assigning highest value to variable 'greatest'
  {
    for (int j = 0; j < daysOfTheWeek; j++)
    {
      if (dataTable[i][j] > greatest)
      {
        greatest = dataTable[i][j];
      }
    }
  }
  
  cout << "\nGreatest: " << greatest << " lbs";  // Display greatest value
}