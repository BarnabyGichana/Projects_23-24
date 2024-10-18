// Barnaby Gichana
// Date. 11.14.2023
// Desc. This program calculates the factorial of a number using a recursive function.

#include <iostream>
using namespace std;

double factorialCalculator(double);

int main(){
    // User Instructions
    cout << "\nUse this program to calculate the factorial of any given natural number.\n";

    // Declare
    double number;
    char option;

    do{
        // Populate
        cout << "\nEnter a number to calculate its factorial: ";
        cin >> number;

        // Process & Display
        cout << "\nThe factorial of " << number << " is " << factorialCalculator(number);
        cout << "\nDone!\n";

        // Ask user to continue
        cout << "\nWould you like to continue (Y/N): ";
        cin >> option;
    } while (option == 'y'||option == 'Y');

    // Thank the user
    cout << "\nThank you for using this program! :)\n";
    return 0;
}

//************************************************
// Function:  factorialCalculator                *
//************************************************
double factorialCalculator(double number){
    if (number == 0){   // 0! = 1 always
        return 1;
    }
    else{               // The function calls itself after returning the result until "number - 1" = 0
        return number * factorialCalculator(number - 1);
    }
}