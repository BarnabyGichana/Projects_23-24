//Barnaby Gichana
//Date. 09.20.2023
//Desc. prog that calculates the area of a circle in square inches

#include <iostream>
using namespace std;

int main ()
{
  //Declare
  double diameter;
  double radius;
  double area;
  double PI = 3.1415927;
  char option = 'y';

  cout << "Use this program to calculate the area of a circle given the diameter in inches.\n\n";//displaying instructions for the user

  while(option == 'y' || option == 'Y')//enables the program to loop itself
    {
      //Populate
      cout << "Enter the diameter of the circle (in.): ";
      cin >> diameter;
      cout << endl;

        //Process
        radius = diameter / 2; //calculating radius
        area = PI * radius * radius; //calculating area
      
        //Display the resluts
        cout << "Radius: " << radius << endl << "Area: " << area << endl;

      
      //Asking the user if the program should restart or not
      cout << "\n\nContinue Y/N: ";
      cin >> option;
      cout << "\n\n";
      
    }//Close while
  
}//Close main