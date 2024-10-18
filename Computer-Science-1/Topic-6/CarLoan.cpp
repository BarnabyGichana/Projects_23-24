//Barnaby Gichana
//Date. 09.18.2023
//Desc. prog. to determine if an applicant is eligible for a car loan
//Criteria. applicant must be recent graduate and have a job

#include <iostream>
using namespace std;

int main()
{
  //Declare the variables
  char graduate;
  char job;
  char option = 'y';

  //Enabling the user to restart the program
  while(option == 'y' || option == 'Y')
    {
      //displaying the purpose of the prog.
      cout << "Find out if you are eligible for this car loan by answering the two questions below!\n\n";
      
      //Populate the variables
      cout << "Are you a recent graduate (Y/N): ";
      cin >> graduate;
      cout << "Do you have a job (Y/N): ";
      cin >> job;
    
      //Process the input data & Display the final verdict
      if((graduate == 'y' || graduate == 'Y') && (job == 'y' || job == 'Y'))
        {
          cout << "\nVerdict:  Loan approved!";
        }//Close if
    
      else
        {
          cout << "\nVerdict:  Not approved.";
        } //Close else

      //Asking the user to restart the program
      cout << "\n\nWould you like to start again? (Y/N): ";
      cin >> option;
      cout << "\n\n\n";

    } //Close while

  cout << "Thank you for using this program!";
    
} //Close main