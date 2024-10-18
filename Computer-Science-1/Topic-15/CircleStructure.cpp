// Barnaby Gichana
// Date. 11/27/2023
// Desc. This program accepts input for a circle's radius to calculate the circle's diameter and area. The circle's parameters are stored in a data structure.

#include <iostream>
#include <cmath>
using namespace std;

struct CircleParameters{
    double radius;   // Circle radius
    double diameter; // Circle diameter
    double area;     // Circle area
};

void getInfo(CircleParameters, double);

int main(){
    CircleParameters circle;
    double pi = 3.14159;
    char restart_option = 'y';

    while (restart_option == 'y' || restart_option == 'Y'){
        getInfo(circle, pi);

        // Ask user to restart program
        cout << endl;
        cout << "Would you like to continue? (Y/N): ";
        cin >> restart_option;
    }
    // Thank the user
    cout << endl << "Thank you for using this program! :)\n -Barnaby K. Gichana";
    return 0;
}

//**************************************************************
// Function: getInfo                                           *
//**************************************************************
void getInfo(CircleParameters circle, double pi){
    cout << "\nEnter the radius: ";
    cin >> circle.radius;

    circle.diameter = (circle.radius * 2);
    cout << "The diameter is: " << circle.diameter << endl;

    circle.area = (pi * pow(circle.radius, 2.0));
    cout << "The area is: " << circle.area << endl;
}