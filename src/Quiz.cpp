#include <iostream>
#include <fstream>
#include <sstream>
#include "../include/Quiz.h"

using namespace std;
void printLine() {
    cout << "==================================================\n";
}

void printBox(string text) {
    printLine();
    cout << "   " << text << "\n";
    printLine();
}

Quiz::Quiz() {
    score = 0;
}

void Quiz::loadQuestions() {
    ifstream file("data/questions.txt");

    if (!file) {
        cout << "Error: Could not open questions file.\n";
        return;
    }

    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string part;
        vector<string> parts;

        while (getline(ss, part, '|')) {
            parts.push_back(part);
        }

        if (parts.size() == 6) {
            string question = parts[0];
            vector<string> options = {
                parts[1], parts[2], parts[3], parts[4]
            };
            int correctAnswer = stoi(parts[5]);

            questions.push_back(Question(question, options, correctAnswer));
        }
    }

    file.close();
}

void Quiz::startQuiz() {
    int userAnswer;

    printBox("OS QUIZ APPLICATION");
    cout << "Total Questions: " << questions.size() << "\n";
    printLine();

    for (int i = 0; i < questions.size(); i++) {
        cout << "\n[" << i + 1 << "/" << questions.size() << "] ";
        cout << questions[i].question << "\n\n";

        for (int j = 0; j < questions[i].options.size(); j++) {
            cout << "   (" << j + 1 << ") " << questions[i].options[j] << "\n";
        }

        cout << "\nYour Answer >> ";
        cin >> userAnswer;

        if (userAnswer < 1 || userAnswer > 4) {
            cout << "\n Invalid input! Skipping...\n";
            printLine();
            continue;
        }

        if (userAnswer == questions[i].correctAnswer) {
            cout << "\nCorrect!\n";
            score++;
        } else {
            cout << "\n Wrong!\n";
            cout << "Correct Answer: "
                 << questions[i].correctAnswer << "\n";
        }

        printLine();
    }
}

void Quiz::showResult() {
    if (questions.empty()) {
        cout << "No questions loaded.\n";
        return;
    }

    int total = questions.size();
    double percentage = (double(score) / total) * 100;

    printBox("QUIZ RESULT");

    cout << "Score      : " << score << " / " << total << "\n";
    cout << "Percentage : " << percentage << "%\n\n";

    if (percentage >= 80) {
        cout << " Performance: Excellent\n";
    } else if (percentage >= 50) {
        cout << " Performance: Good\n";
    } else {
        cout << " Performance: Needs Improvement\n";
    }

    printLine();
}