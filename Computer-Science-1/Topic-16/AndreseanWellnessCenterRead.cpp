// Barnaby Gichana
// Date. 12/04/2023
/* Desc. This is a program that will read the file just created (myWeeklySteps.txt). 
   . Display the day of week and the number of steps.
   . Display the highest day.
   . Display the lowest day
   . Display the Total number of steps for the week
   . Display the average of steps for the week
*/

#include <iostream>
#include <fstream>
using namespace std;

void highSteps(int, int *);
void lowSteps(int, int *);
void avgSteps(int, int *);

int main(){
    const int days = 7; // Number of days
    int steps[days];    // Number of steps each day

    // Open file for reading
    ifstream infile;
    infile.open("myWeeklySteps.txt");

    for (int i = 0; i < days; i++){
        if (!infile.eof()){
            infile >> steps[i];
        } else {
            cout << "Error: Not enough numbers in the file." << endl;
            infile.close();
            return 1;
        }
    }

    // Close file
    infile.close();

    // Print the steps
    for (int i = 0; i < days; i++){
        cout << "Steps taken on day " << i+1 << ": " << steps[i] << endl;
    }

    highSteps(days, steps);
    lowSteps(days, steps);
    avgSteps(days, steps);

    return 0;
}

//**************************************************************
// Function: highSteps                                         *
//**************************************************************
void highSteps(int days, int *steps){
    int high = steps[0];

    for (int i = 0; i < days; i++){
        if (high < steps[i]){
            high = steps[i];
        }
    }

    cout << "\nHighest number of steps: " << high;
}

//**************************************************************
// Function: lowSteps                                          *
//**************************************************************
void lowSteps(int days, int *steps){
    int low = steps[0];

    for (int i = 0; i < days; i++){
        if (low > steps[i]){
            low = steps[i];
        }
    }

    cout << "\nLowest number of steps: " << low;
}

//**************************************************************
// Function: avgSteps                                          *
//**************************************************************
void avgSteps(int days, int *steps){
    int totalSteps = 0;

    for (int i = 0; i < days; i++){
        totalSteps += steps[i];
    }

    cout << "\nTotal number of steps: " << totalSteps;
    cout << "\nAverage number of steps per day: " << (totalSteps / days);
}