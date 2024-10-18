// Barnaby Gichana
// Date. 12/04/2023
/* Desc. This is a program that computes and displays the charges for a patient's hospital stay.
   First, the program asks if the patient was admitted as an in-patient or an out-patient.  
   If the patient was an in-patient, the following data should be entered:
   * The number of days spent in the hospital
   * The daily rate
   * hospital medication charges
   * Charges for hospital services(lab tests, etc.)
   If the patient was an out-patient, the program asks for the following data:
   * Charges for hospital services(lab tests, etc.)
   * Hospital medication charges
   The program should use to functions to calculate the total charges.  One function should accept arguments for the in-patient data, while the other function accepts arguments for out-patient information.  Bothe functions should return the total charges.
*/

#include <iostream>
using namespace std;

void inPatientCalc(int *, double *, double *, double *, double *);
void outPatientCalc(double *, double *, double *);
void displayBill(double *);

int main(){
    int totalDays;      // Number of days spent in the hospital
    double dailyRate;   // Daily rate
    double medCharges;  // Hospital medication charges
    double servCharges; // Hospital services charges
    double bill;        // Total hospital bill

    char restart_option = 'y'; // Restart loop imput variable
    while (restart_option == 'y' || restart_option == 'Y'){
        int patientType;    // Patient type variable
        cout << "Was the patient admitted as an in-patient or out-patient?\nIn-patient = 0\nOut-patient = 1\n";
        cout << "Enter (0/1): ";
        cin  >> patientType;
        while (patientType != 0 && patientType != 1){
            cout << "Invalid input! Enter 0 or 1: ";
            cin >> patientType;
        }
        if (patientType == 0){
            inPatientCalc(&totalDays, &dailyRate, &medCharges, &servCharges, &bill);
        }
        else if (patientType == 1){
            outPatientCalc(&servCharges, &medCharges, &bill);
        }

        // Display bill
        displayBill(&bill);

        // Ask user to restart
        cout << "\nWould you like to continue? (Y/N): ";
        cin >> restart_option;
        cout << endl;
    }
    // Thank the user
    cout << "Thank you for using this program! :)\n -Barnaby Gichana";
    return 0;
}

void inPatientCalc(int *totalDays, double *dailyRate, double *medCharges, double *servCharges, double *bill){
    // Populate data
    cout << "Enter the total number of days spent in the hospital: ";
    cin >> *totalDays;
    while (*totalDays < 0){
        cout << "Invalid input! Enter a positive value: ";
        cin >> *totalDays;
    }
    cout << "Enter the patient's daily rate: ";
    cin >> *dailyRate;
    while (*dailyRate < 0){
        cout << "Invalid input! Enter a positive value: ";
        cin >> *dailyRate;
    }
    cout << "Enter the hospital medication charges: ";
    cin >> *medCharges;
    while (*medCharges < 0){
        cout << "Invalid input! Enter a positive value: ";
        cin >> *medCharges;
    }
    cout << "Enter the hospital service charges: ";
    cin >> *servCharges;
    while (*servCharges < 0){
        cout << "Invalid input! Enter a positive value: ";
        cin >> *servCharges;
    }

    // Calculate bill
    *bill = ((*totalDays * *dailyRate) + *medCharges + *servCharges);
}

void outPatientCalc(double *servCharges, double *medCharges, double *bill){
    // Populate data
    cout << "Enter the hospital service charges: ";
    cin >> *servCharges;
    cout << "Enter the hospital medication charges: ";
    cin >> *medCharges;

    // Calculate bill
    *bill = (*servCharges + *medCharges);
}

void displayBill(double *bill){
    cout << "------------------------------------------------";
    cout << endl << " Calculated bill: $" << *bill << endl;
    cout << "------------------------------------------------";
}