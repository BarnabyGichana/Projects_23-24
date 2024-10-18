//Barnaby Gichana
//Date. 09.13.2023
//Desc. prog. to display the letter grade of a corresponding number grade

#include <iostream>
using namespace std;

int main()
{
    //Declare
    double score;
    char option = 'y';

  
    cout << "Use this program to display the letter grade of a corresponding numerical grade.\nNote! Do not use the percent sign (%).\n\n";//displaying instructions for the user

    while(option == 'y' || option == 'Y')//enabling the program to restart itself
    {
      //Populate
      cout << "Enter grade score: ";
      cin >> score;

      cout << "\nLetter grade: ";

        //Calculating the letter grade
        if(score > 90)
        {
          cout << "A\n";
        }//Close if
      
        else if(score > 80)
        {
          cout << "B\n";
        }//Close else if
      
        else if(score > 70)
        {
          cout << "C\n";
        }//Close else if
      
        else if(score > 60)
        {
          cout << "D\n";
        }//Close else if
      
        else
        {
          cout << "F\n";
        }//Close if

      //Asking the user if the program should restart or not
      cout << "\n\nContinue Y/N: ";
      cin >> option;
      cout << "\n\n";
      
    }//Close while
  
}//Close main