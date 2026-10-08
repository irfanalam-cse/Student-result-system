#include <iostream>
using namespace std;

// Function to calculate total marks
int calculateTotal(int m1, int m2, int m3)
{
    return m1 + m2 + m3;
}

// Function to calculate percentage
float calculatePercentage(int total)
{
    return (float)total / 3;
}

// Function to calculate grade
char calculateGrade(float percentage)
{
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 75)
        return 'B';
    else if(percentage >= 60)
        return 'C';
    else if(percentage >= 40)
        return 'D';
    else
        return 'F';
}

// Function to validate marks
bool validMarks(int marks)
{
    return marks >= 0 && marks <= 100;
}

int main()
{
    int choice;

    string name;
    int marks1 = 0, marks2 = 0, marks3 = 0;

    bool studentAdded = false;

    do
    {
        cout << endl;
        cout << "========================================" << endl;
        cout << "     STUDENT RESULT MANAGEMENT SYSTEM" << endl;
        cout << "========================================" << endl;

        cout << "1. Enter Student Details" << endl;
        cout << "2. View Student Result" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << endl;
                cout << "Enter student name: ";
                cin >> name;

                cout << "Enter marks of Subject 1: ";
                cin >> marks1;

                cout << "Enter marks of Subject 2: ";
                cin >> marks2;

                cout << "Enter marks of Subject 3: ";
                cin >> marks3;

                // Validate marks
                if(!validMarks(marks1) ||
                   !validMarks(marks2) ||
                   !validMarks(marks3))
                {
                    cout << endl;
                    cout << "Invalid marks!" << endl;
                    cout << "Marks must be between 0 and 100." << endl;

                    break;
                }

                studentAdded = true;

                cout << endl;
                cout << "Student details saved successfully!" << endl;

                break;
            }

            case 2:
            {
                if(studentAdded == false)
                {
                    cout << endl;
                    cout << "No student details found!" << endl;
                    cout << "Please enter student details first." << endl;

                    break;
                }

                int total = calculateTotal(marks1, marks2, marks3);

                float percentage = calculatePercentage(total);

                char grade = calculateGrade(percentage);

                cout << endl;
                cout << "========================================" << endl;
                cout << "           STUDENT RESULT" << endl;
                cout << "========================================" << endl;

                cout << "Student Name : " << name << endl;
                cout << "Subject 1    : " << marks1 << endl;
                cout << "Subject 2    : " << marks2 << endl;
                cout << "Subject 3    : " << marks3 << endl;
                cout << "Total Marks  : " << total << "/300" << endl;
                cout << "Percentage   : " << percentage << "%" << endl;
                cout << "Grade        : " << grade << endl;

                if(percentage >= 40)
                    cout << "Result       : PASS" << endl;
                else
                    cout << "Result       : FAIL" << endl;

                cout << "========================================" << endl;

                break;
            }

            case 3:
            {
                cout << endl;
                cout << "Thank you for using Student Result Management System!" << endl;

                break;
            }

            default:
            {
                cout << endl;
                cout << "Invalid choice!" << endl;
                cout << "Please select 1, 2 or 3." << endl;
            }
        }

    } while(choice != 3);

    return 0;
}