# Student Grade Management System (C++)

## Overview
This project is a simple Student Grade Management System developed in C++. It demonstrates Object-Oriented Programming (OOP), STL containers, and file handling.

## Features
- Add student records
- Calculate grades based on marks
- Store student data using STL vectors
- Save records into a text file
- Display all student details

## Technologies Used
- C++
- Object-Oriented Programming
- STL (vector)
- File Handling

## Project Structure

```
Task4_OOP_STL_Project/
│
├── main.cpp
├── students.txt
├── docs/
│   └── student_management_output.png
└── README.md
```

## Build Instructions

Compile:

```bash
g++ main.cpp -o student_system.exe
```

Run:

```bash
./student_system.exe
```

## Sample Output

```
Student Grade Management System

Roll No: 101, Name: Joshua, Age: 20, Marks: 92, Grade: A
Roll No: 102, Name: Alex, Age: 21, Marks: 78, Grade: B
Roll No: 103, Name: John, Age: 20, Marks: 64, Grade: C

Student records saved successfully to students.txt
```

## Design Decisions

- Used a Student class for encapsulation.
- Used STL vector to manage multiple student records.
- Implemented grade calculation using marks.
- Used file handling to persist student data.
