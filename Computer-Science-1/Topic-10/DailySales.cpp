//Barnaby Gichana
//10.16.2023
//Program that will accept values for the sales of a business from Monday through Friday. It will also calculate and display the average of all 5 sales and display the days of the week that had the highest and lowest sales.

#include <iostream>
using namespace std;

double meanSale(double sale[], int size);
double highSale(double sale[], int size);
double lowSale(double sale[], int size);


int main()
{
  // Decalring variables to store sales in an array
  int size = 5;
  double sales[size];
  char option = 'y';

  // Displaying the program's purpose
  cout << "Use this program to input the sales of a business for Monday through Friday and calculate the average sales and the days of the week that had the highest and lowest sales.\n\n";

  // Restart while loop if user wants to repeat
  while (option == 'y' || option == 'Y')
    {
      // Prompting the user to input the sales of each day
      for (int i = 0; i < size; i++)
        {
          if (i == 0)
          {
            cout << "Enter the sales for Monday:      $";
          }
          else if (i == 1)
          {
            cout << "Enter the sales for Tuesday:     $";
          }
          else if (i == 2)
          {
            cout << "Enter the sales for Wednesday:   $";
          }
          else if (i == 3)
          {
            cout << "Enter the sales for Thursday:    $";
          }
          else
          {
            cout << "Enter the sales for Friday:      $";
          }
          cin >> sales[i];
        }

      cout << endl;
      // Displaying the highest sale
      cout << "Highest sale: $" << highSale(sales, size) << endl;
        if (highSale(sales, size) == sales[0])
        {
          cout << "(Monday)" << endl;
        }
        else if (highSale(sales, size) == sales[1])
        {
          cout << "(Tuesday)" << endl;
        }
        else if (highSale(sales, size) == sales[2])
        {
          cout << "(Wednesday)" << endl;
        }
        else if (highSale(sales, size) == sales[3])
        {
          cout << "(Thursday)" << endl;
        }
        else
        {
          cout << "(Friday)" << endl;
        }

      // Displaying the lowest sale
      cout << "\nLowest sale:  $" << lowSale(sales, size) << endl;
        if (lowSale(sales, size) == sales[0])
        {
          cout << "(Monday)" << endl;
        }
        else if (lowSale(sales, size) == sales[1])
        {
          cout << "(Tuesday)" << endl;
        }
        else if (lowSale(sales, size) == sales[2])
        {
          cout << "(Wednesday)" << endl;
        }
        else if (lowSale(sales, size) == sales[3])
        {
          cout << "(Thursday)" << endl;
        }
        else
        {
          cout << "(Friday)" << endl;
        }

      // Displaying the total sales
      cout << "\nTotal sales:  $" << (meanSale(sales, size)) * size << endl;

      // Displaying the average of all the sales
      cout << "Average sale: $" << meanSale(sales, size) << endl;

      // Prompting the user to restart the program
      cout << endl << "Do you want to run this program again? (Y/N): ";
      cin >> option;
      cout << endl;
    }

  //Thanking the user
  cout << "Thank you for using this program! :)";
  return 0;
}


//***************************************************************
// Function Name: meanSale                                      *
// calculates and displays the average value of all the sales   *
//***************************************************************
double meanSale(double sale[], int size)
{
  double sum = 0;

  // Calculating and returning the average value of all sales
  for (int i = 0; i < size; i++)
  {
    sum += sale[i];
  }
  double average = sum / size;
  return average;
}


//***************************************************************
// Function Name: highSale                                      *
// calculates and displays the highest sale                     *
//***************************************************************
double highSale(double sale[], int size)
{
  double highest = sale[0];

  // Determining the value of highest sale
  for (int i = 0; i < size; i++)
    {
      if (sale[i] > highest)
      {
        highest = sale[i];
      }
    }
  return highest;
}

//***************************************************************
// Function Name: lowSale                                       *
// calculates and displays the lowest sale                      *
//***************************************************************
double lowSale(double sale[], int size)
{
  double lowest = sale[0];

  // Determining the value of the lowest sale
  for (int i = 0; i < size; i++)
    {
      if (sale[i] < lowest)
      {
        lowest = sale[i];
      }
    }
  return lowest;
}