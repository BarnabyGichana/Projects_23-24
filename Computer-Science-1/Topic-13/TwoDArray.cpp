//Barnaby Gichana
//Date. 11.09.2023
/*Desc. program that creates a 2 dimensional array, populates it with random numbers, then displays the random numbers.
  The program runs until the user is finished with it.
*/

#include <iostream>
#include <ctime>     // For random number generator
#include <cstdlib>
#include <iomanip>   // For set width function

using namespace std;

void createArray(int, int, int**);
void displayArray(int, int, int**);

int main(){
    // Display user insctructions
    cout << endl;
    cout << "Use this program to generate random numbers between 1-100 in table form. Enter the dimensions of your desired table below.";
    cout << endl;
    
    // Declare
    int rows;
    int columns;
    char restart_option = 'y';

    while (restart_option == 'y' || restart_option == 'Y'){  // Restart loop
        // Populate
        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> columns;

        int** two_dimensional_array = new int*[rows];        // Allocate memory for the array of pointers
        for (int i = 0; i < rows; i++){                      // Allocate memory for each row
            two_dimensional_array[i] = new int[columns];
        }

        // Process
        createArray(rows, columns, two_dimensional_array);

        // Display
        displayArray(rows, columns, two_dimensional_array);

        // Ask user to restart the program
        cout << "\nWould you like to rerun the program? (Y/N): ";
        cin >> restart_option;
        cout << endl;
    }

    // Thank the user
    cout << "Thank you for using this program! :)" << endl;

    return 0;
}

//*****************************************************************
// Function: createArray                                          *
//*****************************************************************
void createArray(int rows, int columns, int** two_dimensional_array){
    unsigned seed = time(0);                                    // Seed random number
    srand(seed);

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            two_dimensional_array[i][j] = rand() % 100 + 1;
        }
    }
}

//*****************************************************************
// Function: displayArray                                         *
//*****************************************************************
void displayArray(int rows, int columns, int** two_dimensional_array){
    // Display array in table form
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cout << setw(4) << two_dimensional_array[i][j];
        }
        cout << endl;
    }
}