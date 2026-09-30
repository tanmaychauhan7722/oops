#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;

public:
    void read() {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    float getMarks() {
        return marks;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *students = new Student[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;
        students[i].read();
    }
    cout << "\n--- Student Records ---\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }
    Student *highest = &students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].getMarks() > highest->getMarks()) {
            highest = &students[i];
        }
    }

    cout << "\n--- Student with Highest Marks ---\n";
    highest->display();

    delete[] students;

    return 0;
}