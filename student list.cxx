#include <iostream>
using namespace std;

struct Student
{  string name;
    string roll_no;
    string Class;
    string grade;
    string dob;
    string age;
    string father_name;
    string mother_name;
    string adress;
    string mob_no;
    string gender;
};

Student students[50]; // Array to store students
int numStudent = 0;   // Current number of contacts

void addStudent()
{
    if (numStudent < 50)
    {
        Student newStudent;
        cout << "Enter name: ";
        getline(cin, newStudent.name);
        cin.ignore();
        cin.clear();

        cout << "Enter roll number: ";
        getline(cin, newStudent.roll_no);
        cin.ignore();
        cin.clear();

        cout << "Enter class: ";
        getline(cin, newStudent.Class);
        cin.ignore();
        cin.clear();

        cout << "Enter grade: ";
        getline(cin, newStudent.grade);
        cin.ignore();
        cin.clear();

        cout << "Enter date of birth: " << endl;
        getline(cin, newStudent.dob);
        cin.ignore();
        cin.clear();

        cout << "Enter age: " << endl;
        getline(cin, newStudent.age);
        cin.ignore();
        cin.clear();

        cout << "Enter father's name: ";
        getline(cin, newStudent.father_name);
        cin.ignore();
        cin.clear();

        cout << "Enter mother's name: ";
        getline(cin, newStudent.mother_name);
        cin.ignore();
        cin.clear();

        cout << "Enter address: ";
        getline(cin, newStudent.adress);
        cin.ignore();
        cin.clear();

        cout << "Enter mobile number: ";
        getline(cin, newStudent.mob_no);
        cin.ignore();
        cin.clear();

        cout << "Enter gender: ";
        getline(cin, newStudent.gender);
        cin.ignore();
        cin.clear();

        students[numStudent++] = newStudent;
        cout << "Student added successfully!  (⁠~⁠‾⁠▿⁠‾⁠)⁠~ " << endl;
    }
    else
    {
        cout << "Student is full. Cannot add more students." << endl;
    }
}

void displayStudent()
{
    if (numStudent == 0)
    {
        cout << "Students List empty." << endl;
        cout << " " << endl;
    }
    else
    {
        cout << "Student List :" << endl;
        for (int i = 0; i < numStudent; ++i)
        {
            cout << students[i].name << endl;
            cout << students[i].roll_no << endl;
            cout << students[i].Class << endl;
            cout << students[i].grade << endl;
            cout << students[i].dob << endl;
            cout << students[i].age << endl;
            cout << students[i].adress << endl;
            cout << students[i].gender << endl;
            cout << students[i].mob_no << endl;
            cout << students[i].father_name << endl;
            cout << students[i].mother_name << endl;
            cout << "  " << endl;
        }
    }
}

int main()
{
    while (true)
    {
        int choice;
        cout << "What To Do ᕙ⁠(⁠ ⁠ ⁠•⁠ ⁠‿⁠ ⁠•⁠ ⁠ ⁠)⁠ᕗ:" << endl;
        cout << " " << endl;
        cout << "1. Add a student " << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ☞⁠￣⁠ᴥ⁠￣⁠☞  ";

      cin >> choice;
cin.clear(); // Clear any error flags
cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the remaining characters in the input buffer
system("cls");

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudent();
            break;
        case 3:
            cout << "Exiting the Student list." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

        return 0;
}