//Barnaby Gichana
//09.06.2023
//Desc. creating a prog. to calculate miles per gallon given begMiles endMiles and gallonsUsed

#include <iostream>
using namespace std;

int main()
{
  //Declaring the variables
  double begMiles;
  double endMiles;
  double gallonsUsed;
  double MPG;

  //Populate
  cout << "Enter begMiles: ";
  cin >> begMiles;
  cout << endl;
  cout << "Enter endMiles: ";
  cin >> endMiles;
  cout << endl;
  cout << "Enter gallonsUsed: ";
  cin >> gallonsUsed;
  

  //Process
  MPG = (endMiles - begMiles)/gallonsUsed;

  cout << "\n\nMPG = " << MPG; //output value
  
}//Close main