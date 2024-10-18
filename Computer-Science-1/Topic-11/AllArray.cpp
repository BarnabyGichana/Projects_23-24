//Barnaby Gichana
//Date. 10.25.2023
//Desc. create an array which contains 50 elements that are populated with random seeded numbers between 1-100, find and display the highest and lowest valued numbers, calculate the total sum and average values of the array, and search for specific numbers using a sequential search and binary search algorithm.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void createArray(int, int[]);
void displayArray(int, int[]);
void displayHighestValue(int, int[]);     // Processing funcitons
void displayLowestValue(int, int[]);
void displayTotalAverage(int, int[]);
void bubbleSort(int, int[]);              // Sorting funciton
void sequentialSearch(int, int[]);        // Search funcitons
void binarySearch(int, int[]);

int main()
{
  // Display instructions
  cout << "Use this program to create an array which contains 50 elements that are populated with random seeded numbers between 1-100, find and display the highest and lowest valued numbers, calculate the total sum and average values of the array, and search for specific numbers using a sequential search and binary search algorithm.\n";
  cout << "Kindly do not enter non-numerical values into the search algorithm. ;)\n\n";
  
  // Declare variables
  int ARRAY_SIZE = 50;                          // Set array size
  int array[ARRAY_SIZE];
  char option = 'y';

  while(option == 'y' || option == 'Y')
    {
      // Call functions
      createArray(ARRAY_SIZE, array);
      displayArray(ARRAY_SIZE, array);
      displayHighestValue(ARRAY_SIZE, array);
      displayLowestValue(ARRAY_SIZE, array);
      displayTotalAverage(ARRAY_SIZE, array);
      bubbleSort(ARRAY_SIZE, array);
      sequentialSearch(ARRAY_SIZE, array);
      binarySearch(ARRAY_SIZE, array);

      // Ask user to restart the program
      cout << "\nWould you like to restart the program with a new array? (Y/N): ";
      cin >> option;
      cout << endl;
    }

  // Thanking the user
  cout << "Thank you for using this program! :)\n";

  return 0;
}

//***********************************************************
// Function: createArray                                    *
//***********************************************************
void createArray(int ARRAY_SIZE, int array[])
{
  unsigned seed = time(0);                      // Seeding random numbers to populate the array
  srand(seed);
  
  for(int i = 0; i < ARRAY_SIZE; i++)
    {
      array[i] = rand() % 100 + 1;              // Populating array with seeded numbers
    }
}

//***********************************************************
// Function: displayArray                                   *
//***********************************************************
void displayArray(int ARRAY_SIZE, int array[])
{
  cout << "\nArray:\n[";                         // Display array
  for(int i = 0; i < ARRAY_SIZE; i++)
    {
      cout << array[i] << ", ";
    }
  cout << "\b\b]"<< endl;
}

//***********************************************************
// Function displayHighestValue                             *
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

  cout << "\nHighest value: " << high << endl;  // Display highest value
}

//***********************************************************
// Function displayLowestValue                              *
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

  cout << "\nLowest value: " << low << endl;    // Display lowest value
}

//***********************************************************
// Function: displayTotalAverage                            *
//***********************************************************
void displayTotalAverage(int ARRAY_SIZE, int array[])
{
  int total = 0;                                // Calculate total
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    total += array[i];
  }
  cout << "\nTotal: " << total;                 // Display total
  cout << endl;

  cout << "\nAverage: " << total / ARRAY_SIZE;  // Display calculated average
  cout << endl;
}

//***********************************************************
// Function: bubbleSort                                     *
//***********************************************************
void bubbleSort(int ARRAY_SIZE, int array[])
{
  int temp;                                     // Temporarily holds elements while sorting

  for(int i = 0; i < ARRAY_SIZE; i++)           // bubbleSort algorithm
  {
    for(int j = i; j < ARRAY_SIZE; j++)
      {
          if(array[i] > array[j])
          {
              temp = array[i];
              array[i] = array[j];
              array[j] = temp;
          }
      }
  }

  cout << "\nSorted Array:\n[";                 // Display sorted array
  for(int i = 0; i < ARRAY_SIZE; i++)
    {
      cout << array[i] << ", ";
    }
  cout << "\b\b]"<< endl;
}

//***********************************************************
// Function: sequentialSearch                               *
//***********************************************************
void sequentialSearch(int ARRAY_SIZE, int array[])
{
  int search;                                   // Variables for the search algorithm
  int searchAmount = 0;

  // Populate: Ask user for input
  cout << "\n(Sequential Search)\nEnter a value to search for in the array: ";
  cin >> search;
  while(search < 1 || search > 100)             // Invalid input warning. Asks the user to enter a valid input
    {
      cout << "Invalid input! Enter a value between 1-100: ";
      cin >> search;
    }
  cout << endl;

  for(int i = 0; i < ARRAY_SIZE; i++)           // Sequential search algorithm
    {
      if(search == array[i])
      {
        searchAmount ++;
      }
    }
  
  if(searchAmount > 0)                          // Display search results
  {
    cout << "The value " << search << " appears " << searchAmount << " time(s) in the array.\n";
  }
  else if(searchAmount == 0)
  {
    cout << "The value " << search << " cannot be found in the array!\n";
  }
}

//***********************************************************
// Function: binarySearch                                   *
//***********************************************************
void binarySearch(int ARRAY_SIZE, int array[])
{
  int value;                                    // Variables for the search algorithm
  int found = 0;
  int first = 0;
  int last = ARRAY_SIZE - 1;
  int middle;

  // Popoulate: Ask user for input
  cout << "\n(Binary Search)\nEnter a value to search for in the array: ";
  cin >> value;
  while(value < 1 || value > 100)               // Invalid input warning. Asks the user to enter a valid input
  {
    cout << "Invalid input! Enter a value between 1-100: ";
    cin >> value;
  }
  cout << endl;

  while(found == 0 && (first <= last))          // Binary search algorithm
    {
      middle = (first + last) / 2;

      if(array[middle] == value)
      {
        found = 1;
      }
      else if (array[middle] > value)
      {
        last = middle - 1;
      }
      else
      {
        first = middle + 1;
      }

      cout << " Inside search " << found << endl;
    }

  if(found == 0)                                // Display search results
  {
    cout << "\nThe value " << value << " was not found in the array!\n";
  }
  else
  {
    cout << "\nThe value " << value << " was found in the array.\n";
  }
}