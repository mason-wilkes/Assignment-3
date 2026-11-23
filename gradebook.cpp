// CSCI 2350 - Assignment 3 - Task C
// Name: Mason Wilkes
// Alex missed the Lab 3 deadline. Is it still worth submitting Lab 3 late?
// Write main so it prints the three reports in expected/gradebook.txt.
#include <iostream>
#include <string>
#include "grade_item.h"

void printReport(const std::string& title, const GradeItem* items[], int count);

int main()
{
    // Write the Task C program here. The handout lists Alex's grade items
    // and the three reports. Create every object in main. Do not use new.
    GradeItem homework1("Homework 1", 9, 10);
    Lab lab1("Lab 1", 20, 20, 0);
    Lab lab2("Lab 2", 18, 20, 2);
    Quiz quiz1("Quiz 1", 6, 8, 10);
    Exam midterm("Midterm", 78, 100, 5);
    GradeItem lab3skipped("Lab 3", 0, 20);
    Lab lab3Late("Lab 3", 19, 20, 4);

    const GradeItem* current[] = {&homework1, &lab1, &lab2, &quiz1, &midterm};

    const GradeItem* skip[] = {&homework1, &lab1, &lab2, &quiz1, &midterm, &lab3skipped};

    const GradeItem* submit[] = {&homework1, &lab1, &lab2, &quiz1, &midterm, & lab3Late};

    printReport("Current grades", current, 5);
    std::cout << '\n';
    printReport("Plan 1: skip Lab 3", skip, 6);
    std::cout << '\n';
    printReport("Plan 2: submit Lab 3 four days late", submit, 6);
    return 0;
}