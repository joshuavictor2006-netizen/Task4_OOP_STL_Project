#include <iostream>
using namespace std;

char calculateGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 40) return 'D';
    else return 'F';
}

int main() {
    bool passed = true;

    if (calculateGrade(95) != 'A') passed = false;
    if (calculateGrade(80) != 'B') passed = false;
    if (calculateGrade(65) != 'C') passed = false;
    if (calculateGrade(45) != 'D') passed = false;
    if (calculateGrade(30) != 'F') passed = false;

    if (passed)
        cout << "All basic unit tests passed successfully!" << endl;
    else
        cout << "Some unit tests failed." << endl;

    return 0;
}