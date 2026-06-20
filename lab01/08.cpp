#include <iostream>
using namespace std;

float calculateGrade(int marks) {
    if (marks >= 90) return 4.00;
    else if (marks < 90 && marks >= 85) return 3.75;
    else if (marks < 85 && marks >= 80) return 3.50;
    else if (marks < 80 && marks >= 75) return 3.25;
    else if (marks < 75 && marks >= 70) return 3.00;
    else if (marks < 70 && marks >= 65) return 2.75;
    else if (marks < 65 && marks >= 60) return 2.50;
    else if (marks < 60 && marks >= 55) return 2.25;
    else if (marks < 55 && marks >= 50) return 2.00;
    else return 0.00;
}

char getLetterGrade(float gradePoints) {
    if (gradePoints >= 3.75) return 'A';
    else if (gradePoints >= 3.50) return 'B+';
    else if (gradePoints >= 3.25) return 'B';
    else if (gradePoints >= 3.00) return 'C+';
    else if (gradePoints >= 2.75) return 'C';
    else if (gradePoints >= 2.50) return 'D+';
    else if (gradePoints >= 2.25) return 'D';
    else if (gradePoints >= 2.00) return 'D';
    else return 'F';
}

char getOverallGrade(float gpa) {
    if (gpa >= 3.75) return 'A';
    else if (gpa >= 3.50) return 'B+';
    else if (gpa >= 3.25) return 'B';
    else if (gpa >= 3.00) return 'C+';
    else if (gpa >= 2.75) return 'C';
    else if (gpa >= 2.50) return 'D+';
    else if (gpa >= 2.25) return 'D';
    else if (gpa >= 2.00) return 'D';
    else return 'F';
}

float calculateGPA(int marks[], int numCourses) {
    float totalGradePoints = 0;
    float totalCredits = 0;
    const int creditsPerCourse = 3;

    for (int i = 0; i < numCourses; i++) {
        float gradePoints = calculateGrade(marks[i]);
        totalGradePoints += gradePoints * creditsPerCourse;
        totalCredits += creditsPerCourse;
    }

    return totalGradePoints / totalCredits;
}

int main() {
    const int numCourses = 5;
    int marks[numCourses];
    float totalMarks = 0, gpa;

    for (int i = 0; i < numCourses; i++) {
        cout << "Enter marks for course " << (i + 1) << ": ";
        cin >> marks[i];
        totalMarks += marks[i];

        float gradePoints = calculateGrade(marks[i]);
        char letterGrade = getLetterGrade(gradePoints);

        cout << "Grade for course " << (i + 1) << ": " << letterGrade << endl;
    }

    gpa = calculateGPA(marks, numCourses);
    cout << " Total marks: " << totalMarks << endl;
    cout << "GPA: " << gpa << endl;


    return 0;
}
