//Barnaby Gichana
//10.16.2023
//Program that will create an array of size 10 to calculate the mean, highest, and lowest grades of a group of 10 students.

#include <iostream>
using namespace std;

// Declaring the three functions that handle the calculations
double meanGrade(double grades[], int size);
double lowGrade(double grades[], int size);
double highGrade(double grades[], int size);

int main()
{
  // Declaring variables to store the grades of the students in an array
  int size = 10;
  double score[size];
  char option = 'y';

  while (option == 'y' || option == 'Y')
    {
      // Prompting the user to enter the grades of the students
      for (int i = 0; i < size; i++)
        {
          cout << "\nEnter score " << i + 1 << " : ";
          cin >> score[i];
        }
    
      cout << endl << endl;
      // Displaying the mean grade
      cout << "The mean of the grades is: " << meanGrade(score, size) << endl;
    
      // Displaying the highest grade
      cout << "The highest grade is: " << highGrade(score, size) << endl;
    
      // Displaying the lowest grade
      cout << "The lowest grade is: " << lowGrade(score, size) << endl;

      // Promting the user to restart the program
      cout << endl << "Do you want to run this program again? (Y/N): ";
      cin >> option;
    }
  
  //Thanking the user
  cout << "Thank you for using this program! :)" << endl;
  return 0;
}


//***************************************************************
// Function Name: meanGrade                                     *
// calculates and displays the average value of all the grades  *
//***************************************************************
double meanGrade(double score[], int size)
{
  double sum = 0;

  // Calculating and returning the average value of 10 grades
  for (int i = 0; i < size; i++)
  {
    sum += score[i];
  }
  double average = sum / size;
  return average;
}


//***************************************************************
// Function Name: highGrade                                     *
// calculates and displays the highest grade                    *
//***************************************************************
double highGrade(double score[], int size)
{
  double highest = score[0];
  for (int i = 0; i < size; i++)
    {
      if (score[i] > highest)
      {
        highest = score[i];
      }
    }
  return highest;
}

//***************************************************************
// Function Name: lowGrade                                      *
// calculates and displays the lowest grade                     *
//***************************************************************
double lowGrade(double score[], int size)
{
  double lowest = score[0];
  for (int i = 0; i < size; i++)
    {
      if (score[i] < lowest)
      {
        lowest = score[i];
      }
    }
  return lowest;
}