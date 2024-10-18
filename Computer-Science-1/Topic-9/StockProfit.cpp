//Barnaby Gichana
//Date. 10.12.2023
//Desc. program that calculates the profit from the sale of a stock based on the number of shares, sale price per share, sale commission paid, purchasing price per share, and purchasing commission paid.

#include <iostream>
using namespace std;

//declaring the function that calculates stock profit
double stockProfit(int, double, double, double, double);

int main()
{
  //stating the purpose of the function
  cout << "Use this program to calculate the profit from the sale of a stock based on the number of shares, sale price per share, sale commission paid, purchasing price per share, and purchasing commission paid.\nOnly use integers and decimals for inputs unless instructed otherwise.\n\n";

  //variables for number of shares, sale price per share, sale commission paid, purchasing price per share, and purchasing commission paid respectively
  double NS, SP, SC, PP, PC, profit;
  char option = 'y';

  //while loop that restarts the program if the user selects option 'Y' or 'y'
  while(option == 'y' || option == 'Y')
    {
    //asking the user to input the number of shares
    cout << "Enter the number of shares: ";
    cin >> NS;

    //asking the user to input the sale price per share
    cout << "Enter the sale price per share (in USD): $";
    cin >> SP;
  
    //asking the user to input the sale price per share
    cout << "Enter the sale commission paid (in USD): $";
    cin >> SC;
    
    //asking the user to input the purchasing price per share
    cout << "Enter the purchasing price per share (in USD): $";
    cin >> PP;
    
    //asking the user to input the purchasing commission paid;
    cout << "Enter the purchasing commission paid (in USD): $";
    cin >> PC;
  
    //calling the stock profit function
    profit = stockProfit(NS, SP, SC, PP, PC);
  
      //displaying the profit or loss using an if/else statement
      if(profit >= 0)
      {
        cout << "\n\nThe total profit based on the values entered above is $" << profit;
      }
      else
      {
        cout << "\n\nThe total loss based on the values entered above is $" << profit;
      }

    //asking the user if they want to restart the program
    cout << "\n\nWould you like to restart the program? (Y/N): ";
    cin >> option;
    cout << "\n\n";
  }//close restart while loop
  
  //displaying a thank you message
  cout << "Thank you for using this program! :)";
}//close main function


//*****************************************************************
// Defining the function that calculates stock profit             *
//*****************************************************************
double stockProfit(int NS, double SP, double SC, double PP, double PC)
{
  //variable for profit
  double profit;
  
  //calculating the profit and returning it to the main function
  profit = ((NS * SP) - SC) - ((NS * PP) + PC);
  return profit;
}//close stock profit function