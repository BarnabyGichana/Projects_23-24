#include <iostream>
using namespace std;

void answerKeyFunction(int, string[]);
void userInputFunction(int, string[]);
void quizGraderFunction(int, string[], string[]);

int main(){
    // User instructions
    cout << "\nWelcome to the official Driver's License Exam progam.";
    cout << "\nEnter your answers to the 15 questions on the exam below.";
    cout << "\n(Note: the only acceptable inputs are 'A/B/C/D' in capital form.)";
    cout << "\n\n";

    // Declare
    const int quiz_size = 15;
    string answer_key_set[quiz_size];
    string user_answer_set[quiz_size];

    // Populate
    answerKeyFunction(quiz_size, answer_key_set);
    userInputFunction(quiz_size, user_answer_set);

    // Process (Grading user's answers)
    quizGraderFunction(quiz_size, answer_key_set, user_answer_set);

    return 0;
}

//***********************************************
// Function: answerKeyFunction                  *
//***********************************************
void answerKeyFunction(int quiz_size, string answer_key_set[]){
    answer_key_set[0] = "A";     // Question 1
    answer_key_set[1] = "A";
    answer_key_set[2] = "D";
    answer_key_set[3] = "B";
    answer_key_set[4] = "B";
    answer_key_set[5] = "A";
    answer_key_set[6] = "C";
    answer_key_set[7] = "D";
    answer_key_set[8] = "D";
    answer_key_set[9] = "D";
    answer_key_set[10] = "B";
    answer_key_set[11] = "A";
    answer_key_set[12] = "B";
    answer_key_set[13] = "C";
    answer_key_set[14] = "C";    // Question 15

}

//***********************************************
// Function: userInputFunction                  *
//***********************************************
void userInputFunction(int quiz_size, string user_answer_set[]){
    for (int i = 0; i < quiz_size; i++){
        cout << "Question " << i+1 << ".  ";
        cin >> user_answer_set[i];

        // Input validation: user_answer_set[i] can only be "A/B/C/D"
        while (user_answer_set[i] != "A" && user_answer_set[i] != "B" && user_answer_set[i] != "C" && user_answer_set[i] != "D"){
            cout << "Invalid input! Enter (A/B/C/D): ";
            cin >> user_answer_set[i];
        }
    }
}

//***********************************************
// Funciton: quizGraderFunction                 *
//***********************************************
void quizGraderFunction(int quiz_size, string answer_key_set[], string user_answer_set[]){
    int score = 0;

    for (int i = 0; i < quiz_size; i++){
        if (user_answer_set[i] == answer_key_set[i]){
            score++;
        }
    }
    cout << "\nScore: " << score << "/15";
    cout << "\nGrade: " << score*100/15 << "%";
    cout << endl;
}