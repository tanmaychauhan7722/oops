#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double cgpa;

public:

    // Constructor 1: only rollNo and name
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
        this->cgpa = 0.0;
    }

    // Constructor 2: rollNo, name and CGPA
    Student(int rollNo, string name, double cgpa) {
        this->rollNo = rollNo;
        this->name = name;
        this->cgpa = cgpa;
    }

    // Update CGPA using this pointer
    void updateCGPA(double cgpa) {
        this->cgpa = cgpa;
    }

    // Nested class
    class Address {
    private:
        string city;
        string state;

    public:
        Address(string city, string state) {
            this->city = city;
            this->state = state;
        }

        void displayAddress() {
            cout << "City: " << city << endl;
            cout << "State: " << state << endl;
        }
    };

    // Display student information
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {

    // Array of Student objects
    Student students[5] = {
        Student(101, "Rahul"),
        Student(102, "Aman", 8.5),
        Student(103, "Rohit"),
        Student(104, "Karan", 9.1),
        Student(105, "Arjun")
    };
    students[0].updateCGPA(8.2);
    students[2].updateCGPA(7.9);
    students[4].updateCGPA(8.8);

    for (int i = 0; i < 5; i++) {
        students[i].display();
        cout << endl;
    }

    Student::Address address1("Jaspur", "Uttarakhand");
    address1.displayAddress();

    return 0;
}