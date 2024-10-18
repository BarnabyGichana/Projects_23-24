//Barnaby Gichana
//Date. 09.11.2023
//Desc. prog to calculate the area of a rectangle

#include <iostream>
using namespace std;

//Declare
int main()
{
  double Length;
  double Width;
  double Area;

  //Stating the function of the prog.
  cout << "\nCalculate the area of a rectangle.\n\n\n";

  //Populate
  cout << "Enter the length of rectangle: ";
  cin >> Length;
  cout << endl;
  cout << "Enter the width of rectangle: ";
  cin >> Width;
  cout << endl;

  //Process
  Area = Length * Width;

  //Display
  cout << "\nArea = " << Area;
}//Close main