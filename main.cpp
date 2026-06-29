#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    virtual void display() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

class Student : public Person {
private:
    int rollNo;
    float marks;

public:
    Student(int r, string n, int a, float m) : Person(n, a) {
        rollNo = r;
        marks = m;
    }

    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 40) return 'D';
        else return 'F';
    }

    void display() override {
        cout << "Roll No: " << rollNo
             << ", Name: " << name
             << ", Age: " << age
             << ", Marks: " << marks
             << ", Grade: " << calculateGrade() << endl;
    }

    void saveToFile(ofstream &file) {
        file << rollNo << " " << name << " " << age << " " << marks << " " << calculateGrade() << endl;
    }
};

int main() {
    vector<Student> students;

    students.push_back(Student(101, "Joshua", 20, 92));
    students.push_back(Student(102, "Alex", 21, 78));
    students.push_back(Student(103, "John", 20, 64));

    cout << "Student Grade Management System\n";
    cout << "--------------------------------\n";

    for (Student &s : students) {
        s.display();
    }

    ofstream file("students.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    file << "Student Records\n";
    file << "---------------\n";

    for (Student &s : students) {
        s.saveToFile(file);
    }

    file.close();

    cout << "\nStudent records saved successfully to students.txt" << endl;

    return 0;
}