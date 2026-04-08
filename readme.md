# 🧠 OS Quiz App (C++)

A simple command-line based quiz application written in C++ that tests your knowledge of Operating Systems concepts.

---

## 📁 Project Structure

```
os-quiz-app/
├── src/
│   ├── main.cpp
│   ├── Quiz.cpp
│   ├── Question.cpp
│
├── include/
│   ├── Quiz.h
│   ├── Question.h
│
├── data/
│   └── questions.txt

## ⚙️ Requirements

* C++ compiler (e.g., `g++`)
* Basic terminal/command line access

---

## ▶️ How to Compile & Run

### Step 1: Open terminal in project root folder

Make sure you are inside the main folder (`os-quiz-app/`).

### Step 2: Compile the code

```
g++ src/*.cpp -o quiz
```

### Step 3: Run the program

```
quiz
```

---

## 📄 Questions File Format

All quiz questions are stored in:

```
data/questions.txt
```

### Format:

```
Question|Option1|Option2|Option3|Option4|CorrectOptionNumber
```

### Example:

```
What is a deadlock?|Fast execution|Process waiting forever|Memory leak|CPU overload|2
```

### Rules:

* Use `|` to separate fields
* Last number must be between `1–4`
* Do not leave empty lines

---

## 🎮 How It Works

1. Program loads questions from file
2. Displays each question with 4 options
3. User enters answer (1–4)
4. Score is calculated
5. Final result is shown

---

## ⚠️ Important Notes

* Run the program from the **root directory**, not inside `src/`
* Ensure `questions.txt` exists inside the `data/` folder
* Invalid input may cause unexpected behavior (basic version)

---

## 🚀 Features

* Modular code structure
* File-based questions (easy to update)
* Score tracking
* Simple and clean interface

---

## 🔥 Future Improvements (Optional)

* Input validation
* Random question order
* Timer per question
* GUI version
* Difficulty levels

---

## 👨‍💻 Author

Developed as a college project using C++.

---
"# projectos" 
