// Barnaby Gichana
// Date. 11.14.2023
// Desc. This program creates and displays a horizontal bar graph to compare the sales of five stores using a row of asterisks for each bar. Each asterisk repressents $100 of sales.

#include <iostream>
using namespace std;

int main(){
    // Display user instructions
    cout << endl;
    cout << "Use this program to create and display a horizontal bar graph comparing the sales of 5 stores.\n";
    cout << "Each asterisk represents $100 of sales.\n";
    
    // Declare
    int number_of_stores = 5;          // Set the number of stores = 5
    int todaySales[number_of_stores];  // Create an array of 5
    int asterisk;                      // Variable used to determine number of asterisks in each row
    char option;                       // Restart option

    do{
        // Populate
        cout << "Enter today's sales for each store:  \n";
        cout << "_____________________________________\n";
        
        for (int i = 0; i < number_of_stores; i++){   // User enters the sales values of each store
            cout << "Store " << i + 1 << ": $";
            cin >> todaySales[i];
        }
        cout << "\n\n";

        cout << "<<<<<<<<<< Sales Bar Chart >>>>>>>>>>\n";
        cout << "-------------------------------------\n";

        // Process & Display
        for (int i = 0; i < number_of_stores; i++){
            asterisk = todaySales[i]/100;             // 1 asterisk = $100 of sales
            cout << "Store " << i + 1 << ": ";

            for (int i = 0; i < asterisk; i++){       // Create bar graph using rows of asterisks
                cout << "*";
            }
            cout << "\n";
        }

        // Ask the user to continue
        cout << endl;
        cout << "Would you like to continue (Y/N): ";
        cin >> option;
    } while (option == 'y'||option == 'Y');
    
    return 0;
}