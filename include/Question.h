#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>
using namespace std;

class Question {
public:
    string question;
    vector<string> options;
    int correctAnswer;

    Question(string q, vector<string> opts, int ans);
};

#endif