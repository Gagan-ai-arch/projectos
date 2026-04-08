#include <iostream>
#include "../include/Quiz.h"

using namespace std;

void welcomeScreen() {
    cout << "==================================================\n";
    cout << "           WELCOME TO OS QUIZ APP\n";
    cout << "==================================================\n";
    cout << "Press ENTER to start...";
    cin.get();
}

int main() {
    welcomeScreen();

    Quiz quiz;
    quiz.loadQuestions();
    quiz.startQuiz();
    quiz.showResult();

    return 0;
}