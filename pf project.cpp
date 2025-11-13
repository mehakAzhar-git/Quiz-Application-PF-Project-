#include <iostream>
using namespace std;
int main() {
    string userName;
    int score = 0;
    int answer;
    cout << "\t\t\t\t\t-------------------------------\n";
    cout << "\t\t\t\t\tWelcome to the Quiz Application!\n";
     cout << "\t\t\t\t\t-------------------------------\n";

    cout << "Please enter your name: ";
    getline(cin, userName);

    cout << "\nHello, " << userName << "! Let's start the quiz.\n";
    cout << "-----------------------------\n";

    // Question 1
    cout << "Q1. What is the capital of Pakistan?\n";
    cout << "1. Lahore\n2. Islamabad\n3. Karachi\n4. Peshawar\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 2. Islamabad.\n";
    }

    cout << "-----------------------------\n";

    // Question 2
    cout << "Q2. Who is known as the Father of Computers?\n";
    cout << "1. Charles Babbage\n2. Alan Turing\n3. Ada Lovelace\n4. Bill Gates\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 1. Charles Babbage.\n";
    }

    cout << "-----------------------------\n";
    // Question 3
    cout << "Q3. Which language is used to style web pages?\n";
    cout << "1. HTML\n2. CSS\n3. C++\n4. Python\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 2) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 2. CSS.\n";
    }

    cout << "-----------------------------\n";
    // Question 4
    cout << "Q4. C++ is the language?\n";
    cout << "1. High level\n2. Low level\n3. Middle level\n4. Assembly\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 1.High level .\n";
    }

    cout << "-----------------------------\n";
    // Question 5
cout << "Q5. which of the following is is the address operator?\n";
    cout << "1. @ \n2. # \n3. &\n4. %\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 3) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 3. &.\n";
    }

    cout << "-----------------------------\n";

    
    // Question 6
cout << "Q6. who developed C++?\n";
    cout << "1. Von-Neumann \n2. Al-Khuwarizmi\n3. Charles Babbage\n4. Bjarna Storustrup\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 1. Von-Neumann\n";
    }
    cout << "-----------------------------\n";
    // Question 7
cout << "Q7. The most difficult part of the problem solving is ?\n";
    cout << "1. Design Algorithm \n2. tasting program\n3. Documentation\n4. Program execution\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 1. Design Algorithm. \n";
    }

    cout << "-----------------------------\n";
     // Question 8
cout << "Q8. Computer program is also known as ?\n";
    cout << "1. Software \n2. Hardware\n3. compiler\n4. procedure\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 1) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 1. Software. \n";
    }
     cout << "-----------------------------\n";
     // Question 9
cout << "Q9. The step-by-step procedure to solve a problem is called ?\n";
    cout << "1. Instruction set \n2. Flowchart\n3. procedure\n4. Algorithm\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 4) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 4. Algorithm. \n";
    }
     cout << "-----------------------------\n";
      // Question 10
cout << "Q10. The extension of the header file is ?\n";
    cout << "1. .cpp \n2. .txt\n3. .c\n4. .h\n";
    cout << "Your answer (1-4): ";
    cin >> answer;

    if (answer == 4) {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 4. .h \n";
    }
     cout << "-----------------------------\n";
    // Final Score
    cout << "\t\t\t\t\tQuiz Over! Thank you for playing, " << userName << ".\n";
    cout << "\t\t\t\t\tYour final score is: " << score << " out of 10.\n";

    // Feedback based on score
    if (score>=8&&score<=10) {
        cout << "\t\t\t\t\tExcellent! You're a genius!\n";
    } else if (score>=5&&score<=7) {
        cout << "\t\t\t\t\tGood job! You did well.\n";
    } else {
        cout << "\t\t\t\t\tBetter luck next time!\n";
    }

    return 0;
}
