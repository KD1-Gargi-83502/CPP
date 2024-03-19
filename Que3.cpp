/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void printStudentOnConsole();
void acceptStudentFromConsole();*/


#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    
    void printStudentOnConsole() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    
    void acceptStudentFromConsole() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

int main() {
    int choice;
    Student student;

    do {
        cout << "\nMenu:";
        cout << "\n1. Print Student Details";
        cout << "\n2. Accept Student Details";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nStudent Details:" << endl;
                student.printStudentOnConsole();
                break;
            case 2:
                cout << "\nEnter Student Details:" << endl;
                student.acceptStudentFromConsole();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;
}

