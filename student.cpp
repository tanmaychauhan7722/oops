#include <iostream>
#include <string>

using namespace std;

class student{
    public:
    string name;
    int rollno;
    student(){
        name="";
        rollno=0;
    }
    student(string n,int x) {
        name=n;
        rollno=x;
    }
    student(const student &other) {
        name = other.name;
        rollno = other.rollno;
    }
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollno << endl;
    }
    
    ~student() {
        cout << "Destructor called for " << name << endl;
    }
};
int main(){
    student s1;                  
    student s2("Tanmay", 101);   
    student s3 = s2;             

    s1.display();
    s2.display();
    s3.display();
    return 0;
}