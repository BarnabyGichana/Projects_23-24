//Barnaby Gichana
//Date. 11.01.2023
//Desc. program that reads 10 random numbers from a file, called "10_Random_Numbers.txt", into an array. Once the array is populated, the program will display the highest, lowest, total, and average values of the array.

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

// Declare functions
void displayHighestValue(int, int[]);
void displayLowestValue(int, int[]);
void displayTotalAverage(int, int[]);

int main() 
{
  int ARRAY_SIZE = 10;           // Array size
  int array[ARRAY_SIZE];         // Array with 10 elements
  int i;                         // Looping counter variable
  
  // Random number generator
  unsigned seed = time(0);
  srand(seed);

  // Open the file
  ofstream outFile;
  outFile.open("10_Random_Numbers.txt");

  // Write 10 random seeded numbers to the array
  for (i = 0; i < ARRAY_SIZE; i++)
    {
      array[i] = rand() % 100 + 1;
    }

  // Write random numbers from array to the file
  for (i = 0; i < ARRAY_SIZE; i++)
    {
      outFile << array[i] << endl;
    }

  //Close the file
  outFile.close();
  cout << "All data written to HD\n\n";

  string number;

  // Open the file
  ifstream inFile;
  inFile.open("10_Random_Numbers.txt");

  // Read random seeded numbers from the file
  cout << "The numbers are: \n";
  for (i = 0; i < ARRAY_SIZE; i++)
    {
      inFile >> number;
      cout << number << endl;
    }

  // Close the file
  inFile.close();

  // Calling the functions
  displayHighestValue(ARRAY_SIZE, array);
  displayLowestValue(ARRAY_SIZE, array);
  displayTotalAverage(ARRAY_SIZE, array);

  cout << "\n\n";
  return 0;
}

//***********************************************************
// Function: highestValue                                   *
//***********************************************************
void displayHighestValue(int ARRAY_SIZE, int array[])
{
  int high = array[0];                          // Variable for highest value

  for(int i = 0; i < ARRAY_SIZE; i++)           // Assigning highest value to variable 'high'
    {
      if(array[i] > high)
      {
        high = array[i];
      }
    }

  cout << "\nHighest value: " << high;          // Display highest value
}

//***********************************************************
// Function: lowestValue                                    *
//***********************************************************
void displayLowestValue(int ARRAY_SIZE, int array[])
{
  int low = array[0];                           // Variable for lowest value

  for(int i = 0; i < ARRAY_SIZE; i++)           // Assigning lowest value to variable 'low'
    {
      if(array[i] < low)
      {
        low = array[i];
      }
    }

  cout << "\nLowest value: " << low;            // Display lowest value
}

//***********************************************************
// Function: totalAverage                                   *
//***********************************************************
void displayTotalAverage(int ARRAY_SIZE, int array[])
{
  int total = 0;                                // Calculate total
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    total += array[i];
  }
  cout << "\nTotal: " << total;                 // Display total

  cout << "\nAverage: " << total / ARRAY_SIZE;  // Display calculated average
}