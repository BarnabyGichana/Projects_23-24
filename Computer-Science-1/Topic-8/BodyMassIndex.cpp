//Barnaby Gichana
//Date. 10.02.2023
//Desc. program that calculate's a person's bmi and decide's whether the person is overweight, underweight, or normal

#include <iostream>
using namespace std;

int main()
{
  cout << "Use this program to calculate a person's BMI based on his/her weight in pounds (lbs) and height in inches (in).\n\n";
  // Declare
  double weight;
  double height;
  double bmi;
  char option = 'y';

  while(option == 'y' || option == 'Y')  // While loop that enables the user to restart the program
    {
      // Populate
      cout << "Enter the person's weight: ";
      cin >> weight;
      cout << "Enter the person's height: ";
      cin >> height;
    
      //Process
      bmi = 703 * (weight / (height * height));
    
      //Display
      cout << "Calculated BMI: " << bmi << endl << endl;
    
      if(bmi < 18.5)
      {
        cout << "This person is underweight.";
      }
      else if(bmi > 25)
      {
        cout << "This person is overweight.";
      }
      else
      {
        cout << "This person is of normal/healthy.";
      }

      // Asking the user if the program should be restarted
      cout << endl << "Would you like to restart the program? (Y/N): ";
      cin >> option;
      cout << "---------------------------------------------------" << endl << endl;
      
    } // Close restart while loop

  cout << "Thank you for using this program. :)";
  
  return 0;
} // Close main