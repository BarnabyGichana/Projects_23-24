// Barnaby Gichana
// Date. 11.26.2023
/* Desc. This program stores the following data about a soccer player in a structure: 
   Player's Name, Player's Number, goals Scored by Player.

   The program keeps an array of 6 of these structures. Each element is for a different player on a team.
   The program asks the user to enter the data for each player.
   It shows a table that lists each player's number, name, and goals scored.
   The also calculates and displays the total goals earned by the team.
   The number and name of the player who has earned the most goals is also displayed.

   Input validations: The program does not accept negative values for players numbers or goals scored
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

struct SoccerPlayer{
    string player_Name;
    int player_number;
    int player_goals;
};

void getInfo(SoccerPlayer [], int);
int getTotalGoals(SoccerPlayer [], int);
void showInfo(SoccerPlayer [], int, int);
void showHighest(SoccerPlayer [], int);

int main(){
    // User instructions
    cout << "\nWelcome to the official unofficial Andrews University Cardinals Soccer Team stat compiler.";
    cout << "\nEnter each player's name below and wait for the program to automatically fill in the player's number of goals (using random numbers).";
    cout << endl << endl;

    int size = 6;              // Defining size of array = 6
    SoccerPlayer team[size];   // Array declaration
    char restart_option = 'y';

    while (restart_option == 'y' || restart_option == 'Y'){
        int total_goals = 0;

        getInfo(team, size);
        total_goals = getTotalGoals(team, size);
        
        showInfo(team, size, total_goals);
        showHighest(team, size);

        // Restart prompt for user
        cout << endl << "Would you like to restart the program? (Y/N): ";
        cin >> restart_option;
        cout << endl;
    }

    // Thank the user
    cout << endl << "Thank you for using this program! :)" << endl;
    return 0;
}

//**************************************************************
// Function: getInfo                                           *
//**************************************************************

void getInfo(SoccerPlayer team[], int size){
    for (int i = 0; i < size; i++){
        // Enter player name
        cout << endl << "Enter player " << i+1 << "'s name: ";
        cin.ignore();
        getline(cin, team[i].player_Name);

        // Enter player number
        cout << "Enter " << team[i].player_Name << "'s number: ";
        cin >> team[i].player_number;
        while (team[i].player_number < 0){  // Input validation: will not accept negative values
            cout << "Invalid Input! Please enter a positive value: ";
            cin >> team[i].player_number;
        }

        // Seed random number between 0-20 for player goals
        unsigned seed = time(0);
        srand(seed);
        team[i].player_goals = rand() % 21;
        cout << "Enter " << team[i].player_Name << "'s goals: ";
        cout << team[i].player_goals << endl;
    }
}

//**************************************************************
// Function: getTotalGoals                                     *
//**************************************************************
int getTotalGoals(SoccerPlayer team[], int size){
    int total_goals = 0;
    for (int i = 0; i < size; i++){
        total_goals += team[i].player_goals;
    }
    return total_goals;
}

//**************************************************************
// Function: showInfo                                          *
//**************************************************************
void showInfo(SoccerPlayer team[], int size, int total_goals){
    cout << endl << "Name      " << "Number   " << "Goals" << endl;
    for (int i = 0; i < size; i++){
        cout << setw(9) << team[i].player_Name << setw(8) << team[i].player_number << setw(8) << team[i].player_goals << endl;
    }
    cout << endl << endl;
    cout << "The team's total goal count is " << total_goals << " goals.";
    cout << endl << endl;
}

//**************************************************************
// Function: showHighest                                       *
//**************************************************************
void showHighest(SoccerPlayer team[], int size){
    int high = team[0].player_goals;
    int highIndex;

    for (int i = 0; i < size ; i++){
        if (high < team[i].player_goals){
            high = team[i].player_goals;
            highIndex = i;
        }
    }

    cout << team[highIndex].player_Name << " number " << team[highIndex].player_number << " scored the most goals with " << high << " goals." << endl;
}