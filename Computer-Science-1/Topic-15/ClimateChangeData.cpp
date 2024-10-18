// Barnaby Gichana
// Date. 11/27/2023
// Desc...

#include <iostream>
using namespace std;

struct FirstQuarter{
    double totalRainFall; // Total rainfall
    double highTemp;      // Highest temperature
    double lowTemp;       // Lowest temperature
    double aveTemp;       // Average temperature
};

void getInfo(double [], double [], int);
void totalRainFallFunc(FirstQuarter, double [], int);
void highTempFunc(FirstQuarter, double [], int);
void lowTempFunc(FirstQuarter, double [], int);
void aveTempFunc(FirstQuarter, double [], int);

int main(){
    int array_size = 3;
    double rainfall[array_size];
    double temp[array_size];
    FirstQuarter weather_data;
    char restart_option = 'y';

    while (restart_option == 'y' || restart_option == 'Y'){
        getInfo(rainfall, temp, array_size);
        cout << endl;
        totalRainFallFunc(weather_data, rainfall, array_size);
        highTempFunc(weather_data, temp, array_size);
        lowTempFunc(weather_data, temp, array_size);
        cout << endl;
        aveTempFunc(weather_data, temp, array_size);

        // Ask user to restart program
        cout << "Would you like to continue? (Y/N): ";
        cin >> restart_option;
    }

    // Thank the user
    cout << endl << "Thank you for using this program! :)\n -Barnaby K. Gichana" << endl;
    return 0;
}

//**************************************************************
// Function: getInfo                                           *
//**************************************************************
void getInfo(double rainfall[], double temp[], int array_size){
    cout << endl;
    // Rainfall input
    for (int i = 0; i < array_size; i++){
        cout << "Enter rainfall for month " << i+1 << ": ";
        cin >> rainfall[i];
        while (rainfall[i] < 0){
            cout << "Invalid input! Kindly enter a non-negative number: ";
            cin >> rainfall[i];
        }
    }

    // Temperature input
    for (int i = 0; i < array_size; i++){
        cout << "Enter temperature for month " << i+1 << ": ";
        cin >> temp[i];
        while (temp[i] < -100 && temp[i] > 140){
            cout << "Invalid input! Kindly enter a number between -100 and 140: ";
            cin >> temp[i];
        }
    }
}

//**************************************************************
// Function: totalRainFallFunc                                 *
//**************************************************************
void totalRainFallFunc(FirstQuarter weather_data, double rainfall[], int array_size){
    int sum_of_rainfall = 0;
    for (int i = 0; i < array_size; i++){
        sum_of_rainfall += rainfall[i];
    }
    weather_data.totalRainFall = sum_of_rainfall;
    cout << "The total rainfall experienced during this quarter was " << weather_data.totalRainFall << endl;
}

//**************************************************************
// Function: highTempFunc                                      *
//**************************************************************
void highTempFunc(FirstQuarter weather_data, double temp[], int array_size){
    weather_data.highTemp = temp[0];
    int highMonth;

    for (int i = 0; i < array_size; i++){
        if (weather_data.highTemp < temp[i]){
            weather_data.highTemp = temp[i];
            highMonth = i+1;
        }
    }

    cout << "The highest temperature was " << weather_data.highTemp << " degrees F in month " << highMonth << endl;
}

//**************************************************************
// Function: lowTempFunc                                       *
//**************************************************************
void lowTempFunc(FirstQuarter weather_data, double temp[], int array_size){
    weather_data.lowTemp = temp[0];
    int lowMonth;
    
    for (int i = 0; i < array_size; i++){
        if (weather_data.lowTemp > temp[i]){
            weather_data.lowTemp = temp[i];
            lowMonth = i+1;
        }
    }

    cout << "The lowest temperature was " << weather_data.lowTemp << " degrees F in month " << lowMonth << endl;
}

//**************************************************************
// Function: aveTempFunc                                       *
//**************************************************************
void aveTempFunc(FirstQuarter weather_data, double temp[], int array_size){
    double sum_of_temp = 0;

    for (int i = 0; i < array_size; i++){
        sum_of_temp += temp[i];
    }

    weather_data.aveTemp = (sum_of_temp / array_size);
    cout << "The average temperature across all three months was " << weather_data.aveTemp << " degrees F." << endl;
}