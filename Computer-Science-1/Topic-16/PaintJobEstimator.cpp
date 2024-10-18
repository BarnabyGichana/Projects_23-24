// Barnaby Gichana
// Date. 12/04/2023
/* Desc. This is a program that allows the user to enter the number of rooms that are to be painted and the price of the paint per gallon.
   It also asks for the square feet of wall space in each room. It then displays the following data: 
   · The number of gallons of paint required 
   · The hours of labor required 
   · The cost of the paint 
   · The labor charges 
   · The total cost of the paint job.
   The painting company has determined that for every 115 square feet of wall space, one gallon of paint and eight hours of labor will be required.
   The company charges $18.00 per hour for labor.
*/

#include <iostream>
using namespace std;

void getInfo(int *, double *, double  *, double  *, double *, double *);
void displayBill(double *, double *, double *, double *);

int main(){
    int numRooms;            // Number of rooms
    double totalSurfaceArea; // Total surface area
    double hours;            // Hours of labor required
    double paintCost;        // Cost of the paint
    double laborCharges;     // Labor charges
    double bill;             // Total bill

    cout << "Welcome to the Gichana Painting Company's official bill calculator program.\n";
    cout << "Labor cost rate: $18.00/hr\n";
    cout << "Paint price: $15.00/gal\n";
    cout << "1gal of paint covers 400 square feet.\n";
    cout << "Kindly follow the prompts below.\n\n";

    char restart_option = 'y'; // Restart loop imput variable
    while (restart_option == 'y' || restart_option == 'Y'){
        getInfo(&numRooms, &totalSurfaceArea, &hours, &paintCost, &laborCharges, &bill);
        displayBill(&hours, &laborCharges, &paintCost, &bill);

        // Ask user to restart
        cout << "\nWould you like to continue? (Y/N): ";
        cin >> restart_option;
        cout << endl;
    }
    // Thank the user
    cout << "Thank you for using this program! :)\n -Barnaby Gichana";
    return 0;
}

//**************************************************************
// Function: getInfo                                           *
//**************************************************************
void getInfo(int *numRooms, double *totalSurfaceArea, double  *hours, double *paintCost, double *laborCharges, double *bill){
    cout << "Enter the number of rooms: ";
    cin >> *numRooms;
    while (*numRooms < 1){
        cout << "Invalid input! Enter a positive value: ";
        cin >> *numRooms;
    }

    *totalSurfaceArea = 0;
    double surfArea[*numRooms];
    for (int i = 0; i < *numRooms; i++){
        cout << "Enter the total surface area of all the walls in room " << i+1 << ": ";
        cin >> surfArea[i];
        while (surfArea[i] < 0){
            cout << "Invalid input! Enter a non-negative value: ";
            cin >> surfArea[i];
        }
    }
    for (int i = 0; i < *numRooms; i++){
        *totalSurfaceArea += surfArea[i];
    }

    *hours = (8 * (*totalSurfaceArea / 115));
    *paintCost = ((*totalSurfaceArea / 400) * 13);
    *laborCharges = (*hours * 18);
    *bill = (*paintCost + *laborCharges);
}

//**************************************************************
// Function: displayBill                                       *
//**************************************************************
void displayBill(double *hours, double *laborCharges, double * paintCost, double *bill){
    cout << "\n-----------------------------------------------";
    cout << "\n Total labor hours: " << *hours;
    cout << "\n Labor charges: $" << *laborCharges;
    cout << "\n Paint cost: $" << *paintCost;
    cout << endl;
    cout << "\n Calculated bill: $" << *bill;
    cout << "\n-----------------------------------------------";
}