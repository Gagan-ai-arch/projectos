#include "../include/Question.h"

Question::Question(string q, vector<string> opts, int ans) {
    question = q;
    options = opts;
    correctAnswer = ans;
}