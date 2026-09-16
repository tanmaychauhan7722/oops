#include <iostream>
using namespace std;

class Marks {
private:
    int marks[5];

public:
    Marks() {
        marks[0] = 85;
        marks[1] = 92;
        marks[2] = 78;
        marks[3] = 88;
        marks[4] = 95;
    }

    void displayMarks() {
        cout << "Marks: ";
        for (auto mark : marks) {
            cout << mark << " ";
        }
        cout << endl;
    }

    friend int totalMarks(Marks student);
};

int totalMarks(Marks student) {
    int total = 0;

    for (auto mark : student.marks) {
        total += mark;
    }

    return total;
}

int main() {
    Marks student;

    student.displayMarks();
    cout << "Total Marks: " << totalMarks(student) << endl;

    return 0;
}