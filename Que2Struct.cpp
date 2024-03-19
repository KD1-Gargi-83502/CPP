/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/

//USING STRUCTURE

#include <iostream>
using namespace std;

struct DateStruct {
    int day;
    int month;
    int year;


    void printDateOnConsole() {
        cout << "Date: " << day << "-" << month << "-" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    
    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main() {
    int choice;
    DateStruct date;

    do {
        cout << "\nMenu:";
        cout << "\n1. Accept Date";
        cout << "\n2. Print Date";
        cout << "\n3. Check Leap Year";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:acceptDateFromConsole();
                date.
                break;
            case 2:
                date.printDateOnConsole();
                break;
            case 3:
                cout << "Enter Year to check if leap year: ";
                int year;
                cin >> year;
                date.year = year; 
                if (date.isLeapYear())
                    cout << year << " is a leap year." << endl;
                else
                    cout << year << " is not a leap year." << endl;
                break;
            case 4:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

