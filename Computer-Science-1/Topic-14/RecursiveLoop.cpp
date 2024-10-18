// Barnaby Gichana
// Date. 11.14.2023
// Desc. This program uses a recursive loop to display my name 10 times

#include <iostream>
using namespace std;

void displayMyName(int);

int main(){
    int repeat = 10;            // Set function to repeat 10 times
    char option;                // Restart option

    do{
        displayMyName(repeat);  // Initial call to function
        cout << "\n\nDone!\n";

        // Ask user to continue
        cout << "\nWould you like run this program again (Y/N): ";
        cin >> option;
    } while (option == 'y'||option == 'Y');

    cout << "\n End of program!\n";
    return 0;
}

//***********************************************
// Recursive Function: displayMyName            *
//***********************************************
void displayMyName(int repeat){
    if (repeat > 0){
        cout << "\nBarnaby Gichana";
        displayMyName(repeat-1);
    }
}