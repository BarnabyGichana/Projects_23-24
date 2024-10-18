// Barnaby Gichana
// Date. 12/04/2023
/* Desc. This program keeps track of a members steps for a week for the Andresean Wellness Center (unofficial) (7days). 
   The program creates a file called myWeeklySteps.txt.  The program records in a file the number of steps taken each day for 7 days.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int days = 7;    // Number of days
    int steps[days]; // Number of steps for each day

    cout << "Welcome to the unofficial Andresean Wellness Center weekly step tracking program.\n";
    cout << "Kindly follow the prompts below.\n\n";

    // Open file
    ofstream outfile;
    outfile.open("myWeeklySteps.txt");

    // User enters data into the steps array
    for (int i = 0; i < days; i++){
        cout << "Enter the number of steps taken on day " << i+1 << ": ";
        cin >> steps[i];
        while (steps[i] < 0){
            cout << "Invalid input! Enter a non-negative value: ";
            cin >> steps[i];
        }
    }

    // Write the steps array into the file
    for (int i = 0; i < days; i++){
        outfile << steps[i] << endl;
    }

    // Close file
    outfile.close();
    cout << "All data written to HD\n.";

    return 0;
}