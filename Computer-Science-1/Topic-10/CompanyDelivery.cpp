//Barnaby Gichana
//10.16.2023
//Program that will accept values for the deliveries of a business from Monday through Friday. It will also calculate and display the average and total of all 5 deliveries and display the days of the week that had the highest and lowest deliveries.

#include <iostream>
using namespace std;

double meanDeliveries (double deliveries[], int size);
double highDeliveries (double deliveries[], int size);
double lowDeliveries (double deliveries[], int size);


int main()
{
  // Decalring variables to store deliveries in an array
  int size = 5;
  double deliveries[size];
  char option = 'y';

  // Displaying the program's purpose
  cout << "Use this program to input the deliveries your business has to make from Monday through Friday and calculate the average deliveries and the days of the week that have the highest and lowest number of deliveries.\n\n";

  // Restart while loop if user wants to repeat
  while (option == 'y' || option == 'Y')
    {
      // Prompting the user to input the deliveries of each day
      for (int i = 0; i < size; i++)
        {
          if (i == 0)
          {
            cout << "Enter the deliveries for Monday:      ";
          }
          else if (i == 1)
          {
            cout << "Enter the deliveries for Tuesday:     ";
          }
          else if (i == 2)
          {
            cout << "Enter the deliveries for Wednesday:   ";
          }
          else if (i == 3)
          {
            cout << "Enter the deliveries for Thursday:    ";
          }
          else
          {
            cout << "Enter the deliveries for Friday:      ";
          }
          cin >> deliveries[i];
        }

      cout << endl;
      // Displaying the day with the most deliveries
      cout << "Most deliveries: " << highDeliveries(deliveries, size) << endl;
        if (highDeliveries(deliveries, size) == deliveries[0])
        {
          cout << "(Monday)" << endl;
        }
        else if (highDeliveries(deliveries, size) == deliveries[1])
        {
          cout << "(Tuesday)" << endl;
        }
        else if (highDeliveries(deliveries, size) == deliveries[2])
        {
          cout << "(Wednesday)" << endl;
        }
        else if (highDeliveries(deliveries, size) == deliveries[3])
        {
          cout << "(Thursday)" << endl;
        }
        else
        {
          cout << "(Friday)" << endl;
        }

      // Displaying the day with the least deliveries
      cout << "\nLeast deliveries:  " << lowDeliveries(deliveries, size) << endl;
        if (lowDeliveries(deliveries, size) == deliveries[0])
        {
          cout << "(Monday)" << endl;
        }
        else if (lowDeliveries(deliveries, size) == deliveries[1])
        {
          cout << "(Tuesday)" << endl;
        }
        else if (lowDeliveries(deliveries, size) == deliveries[2])
        {
          cout << "(Wednesday)" << endl;
        }
        else if (lowDeliveries(deliveries, size) == deliveries[3])
        {
          cout << "(Thursday)" << endl;
        }
        else
        {
          cout << "(Friday)" << endl;
        }

      // Displaying the total deliveries
      cout << "\nTotal deliveries:  " << (meanDeliveries(deliveries, size)) * size << endl;

      // Displaying the average of all the deliveries
      cout << "Average deliveries: " << meanDeliveries(deliveries, size) << endl;

      // Prompting the user to restart the program
      cout << endl << "Do you want to run this program again? (Y/N): ";
      cin >> option;
      cout << endl;
    }

  //Thanking the user
  cout << "Thank you for using this program! :)";
  return 0;
}


//******************************************************************
// Function Name: meanDeliveries                                   *
// calculates and displays the average value of all the deliveries *
//******************************************************************
double meanDeliveries(double deliveries[], int size)
{
  double sum = 0;

  // Calculating and returning the weekly average
  for (int i = 0; i < size; i++)
  {
    sum += deliveries[i];
  }
  double average = sum / size;
  return average;
}


//******************************************************************
// Function Name: highDeliveries                                   *
// calculates and displays the highest deliveries                  *
//******************************************************************
double highDeliveries(double deliveries[], int size)
{
  double highest = deliveries[0];

  // Determining the highest delivery count
  for (int i = 0; i < size; i++)
    {
      if (deliveries[i] > highest)
      {
        highest = deliveries[i];
      }
    }
  return highest;
}

//******************************************************************
// Function Name: lowDeliveries                                    *
// calculates and displays the lowest deliveries                   *
//******************************************************************
double lowDeliveries(double deliveries[], int size)
{
  double lowest = deliveries[0];

  // Determining the lowest delivery count
  for (int i = 0; i < size; i++)
    {
      if (deliveries[i] < lowest)
      {
        lowest = deliveries[i];
      }
    }
  return lowest;
}