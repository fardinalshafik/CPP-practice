#include <iostream>
using namespace std;
inline char calculateLetterGrade(int score) {
    if (score >= 80) {
        return 'A';
    } else if (score >= 70) {
        return 'B';
    } else if (score >= 60) {
        return 'C';
    } else if (score >= 40) {
        return 'D';
    } else {
        return 'F';
    }
}
int main() {
    int studentScore;
    cout << "Enter the student score: ";
    cin >> studentScore;
    if (studentScore >= 0 && studentScore <= 100) {
        char letterGrade = calculateLetterGrade(studentScore);
        cout << "The student's letter grade is: " << letterGrade << endl;
    } else {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
    }
    return 0;
}
