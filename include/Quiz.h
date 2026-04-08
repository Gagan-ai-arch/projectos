#ifndef QUIZ_H
#define QUIZ_H

#include "Question.h"
#include <vector>
using namespace std;

class Quiz {
private:
    vector<Question> questions;
    int score;

public:
    Quiz();
    void loadQuestions();
    void startQuiz();
    void showResult();
};

#endif