#include <iostream>
#include <string>

using namespace std;

class student{
    private:
    string name;
    int rollno;
    static int count;
    public:
    student(){
        name="";
        rollno=0;
    }
    student(string n,int x) {
        name=n;
        rollno=x;
        count++;
    }
    
    friend void displaytotal();
};
int student::count=0;
void displaytotal() {
        cout << "Total student: "<<student::count<< endl;
    }
int main(){              
    student s1("Tanmay", 76);  
    student s2("Chaudhary",77)
    displaytotal();
    return 0;
}