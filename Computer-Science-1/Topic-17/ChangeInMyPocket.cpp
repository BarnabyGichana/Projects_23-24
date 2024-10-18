// Barnaby Gichana
// Date. 12/06/2023
/* Desc. This is a program that allows the user to enter a number of quarters, dimes, and nickels and then sends those four values to a function from the main().
   The receiving function outputs the monetary value of the coins in cents.
   For example, if the user enters 2 for the number of quarters, 3 for the number for dimes, and 1 for the number of nickels,
   then the program should output that the coins are worth 85 cents.
*/
#include <iostream>
using namespace std;

void getInfo(int *, int *, int *);
void calcCoinVal(int *, int *, int *, double *);  // Receiving function

int main(){
    cout << "Greetings traveler! I've been told that you have a few coins in your pocket.\nUse this program to calculate the change in your pocket.\n";

    char restart_option = 'y';
    while(restart_option == 'y' || restart_option == 'Y'){
        int numQuart;       // Number of quarters
        int numDimes;       // Number of dimes
        int numNicks;       // Number of nickels
        double totalChange; // Total change

        // Gathering data from user
        getInfo(&numQuart, &numDimes, &numNicks);
        // Sending relevant variable addresses to receiving function for calculations
        calcCoinVal(&numQuart, &numDimes, &numNicks, &totalChange);

        // Restart prompt
        cout << endl;
        cout << "Would you like to continue? (Y/N): ";
        cin >> restart_option;
    }
    // Thank user
    cout << endl;
    cout << "Thank you for using this program! :)\n -Barnaby Gichana";
    return 0;
}

//******************************************************
// Function: getInfo                                   *
// Desc: Gets the number of coins from the user        *
//******************************************************
void getInfo(int *numQuart, int *numDimes, int *numNicks){
    cout << endl;
    cout << "Enter number of quarters: ";
    cin >> *numQuart;
    cout << "Enter number of dimes: ";
    cin >> *numDimes;
    cout << "Enter number of nickles: ";
    cin >> *numNicks;
}

//******************************************************
// Function: calcCoinVal                               *
// Desc: Calculates the value of the coins             *
//******************************************************
void calcCoinVal(int *numQuart, int *numDimes, int *numNicks, double *totalChange){
    // Value of quarters
    double quartVal;
    quartVal = (*numQuart * 25);
    cout << endl << "Value of quarters: " << quartVal << " cents";
    // Value of dimes
    double dimeVal;
    dimeVal = (*numDimes * 10);
    cout << endl << "Value of dimes: " << dimeVal << " cents";
    // Value of nickels
    double nickVal;
    nickVal = (*numNicks * 5.0);
    cout << endl << "Value of nickels: " << nickVal << " cents";

    // Total value
    *totalChange = quartVal + dimeVal + nickVal;

    // Display total change
    cout << endl << endl;
    cout << "The total change in your pocket is: " << *totalChange << " cents";
}