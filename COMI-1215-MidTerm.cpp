
/* This program quizzes a user on basic C++ knowledge in a multiple choice format.
*  10 questions are asked and each are worth 10pts.
*  At the end of the quiz, a final score is given.
*  Scores 70 and over will pass. Scores 69 and below will fail.
*/

#include <iostream>
#include <string>
using namespace std;

// Global Variables
int score = 0;
bool passFlag = false;

/* Each question is prompted the same. The user is given the question and 4
*  possible answers. 
*  The user's answer is checked to see if it's a valid integer.
*  If valid, the user's answer is checked to see if it matches the right answer.
*  If correct, user gets 10pts and wrong answers recieve 0pts.
*  
*/

// Question 1: Tests basic variable declaration and initialization.
void question1() {
    int ans = 0;
    cout << "Which line of code declares and initializes the variable 'x'?\n";
    cout << "1) int x;\n";
    cout << "2) x == 0;\n";
    cout << "3) int x = 0;\n";
    cout << "4) int x == 0;\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 3)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}

// Question 2: Tests correct cout syntax.
void question2() {
    int ans = 0;
    cout << "What is the correct syntax to print 'You got it'?\n";
    cout << "1) cin >> You got it; \n";
    cout << "2) cin << You got it; \n";
    cout << "3) cout << \"You got it\";\n";
    cout << "4) cout << \"You got it\":\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 3)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 3: Something we haven't learned yet. Loop code check.
void question3() {
    int ans = 0;
    cout << "How many times will this loop run?\n";
    cout << "\tfor (int i = 0; i < 5; i++)\n";
    cout << "\t    cout << \"Hello\";\n";
    cout << "1) 4 times\n";
    cout << "2) 5 times\n";
    cout << "3) 6 times\n";
    cout << "4) Infinite loop\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n";
    }
    else if (ans == 2)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 4: Tests proper use of static_cast for type conversion.
void question4() {
    int ans = 0;
    cout << "What is the correct way to use 'static_cast'?\n";
    cout << "1) double x = Static_cast<double>(y);\n";
    cout << "2) double x = static_cast<double>(y);\n";
    cout << "3) double x = Static_Cast<double>(y);\n";
    cout << "4) double x = static_cast<int>(x);\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 2)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 5: Tests operator precendence and calculation.
void question5() {
    int ans = 0;
    cout << "What will this print: cout << (5 + 3 % 4 - 4) + ((6 * 10 - 3) %2);\n";
    cout << "1) 32\n";
    cout << "2) -3\n";
    cout << "3) 1\n";
    cout << "4) 5\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 4)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 6: Tests which if/else statement executes.
void question6() {
    int ans = 0;
    cout << "What will this print after the code is executed?\n";
    cout << "\tint x = 10;\n";
    cout << "\tif (x < 4)\n";
    cout << "\t    cout << \"A\";\n";
    cout << "\telse\n";
    cout << "\t    cout << \"B\";\n";
    cout << "1) A\n";
    cout << "2) B\n";
    cout << "3) Error\n";
    cout << "4) Nothing\n\n";
    cout << "Choose your answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 2)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 7: static_cast question.
void question7() {
    int ans = 0;
    cout << "What will this print? \n";
    cout << "int x = 5;\n";
    cout << "cout << static_cast<double>(x)/2;\n";
    cout << "1) 0\n";
    cout << "2) 2\n";
    cout << "3) 2.5\n";
    cout << "4) 5\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 3)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 8: Tests correct syntax for a C‑Style string.
void question8() {
    int ans = 0;
    cout << "Which one is the correct format for a C-Style String: \n";
    cout << "1) char name[11] = \"Master Shake\";\n";
    cout << "2) string name[] = \"Mooninites\";\n";
    cout << "3) char name[] = \"Meatwad\";\n";
    cout << "4) char name = \"Frylock\";\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n";
    }
    else if (ans == 3)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 9: Tests correct declaration of a C++ string.
void question9() {
    int ans = 0;
    cout << "Which one correctly declares a string object in C++?\n";
    cout << "1) string name = \"Sealab2021\";\n";
    cout << "2) char name[] = \"The Brak Show\";\n";
    cout << "3) char name = 'Space Ghost';\n";
    cout << "4) string name[] = \"Spacecataz\";\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 1)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


// Question 10: Tests integer division rules with a double.
void question10() {
    int ans = 0;
    cout << "What will this code display?\n";
    cout << "int x = 7;\n";
    cout << "double y = x / 2;\n";
    cout << "cout << y;\n";
    cout << "1) 4\n";
    cout << "2) 3.5\n";
    cout << "3) 3.25\n";
    cout << "4) 3\n\n";
    cout << "Choose an answer: ";
    cin >> ans;
    if (ans < 1 || ans > 4)
    {
        cout << "Choice not valid. Incorrect.\n\n";
    }
    else if (ans == 4)
    {
        cout << "\n";
        score += 10;
    }
    else
    {
        cout << "\n";
    }
}


int main()
{
    // Calls each question in order from 1–10
    question1();
    question2();
    question3();
    question4();
    question5();
    question6();
    question7();
    question8();
    question9();
    question10();

    // Displays final score
    cout << "Final Score: " << score << "\n";

    // Determines pass/fail
    if (score >= 70)
    {
        passFlag = true;
    }
    else
    {
        passFlag = false;
    }

    // Displays pass/fail message
    if (passFlag)
    {
        cout << "Congratulations! You passed!\n\n";
    }
    else
    {
        cout << "You fail! Better luck next time!\n\n";
    }

    return 0;

}
