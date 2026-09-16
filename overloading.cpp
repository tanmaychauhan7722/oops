#include <iostream>
#include <string>

using namespace std;

class student{ 
public:
    void display(string name){
        cout<<name<<endl;
    }
     void display(int rollno){
        cout<<rollno<<endl;
    }
    void displaygrade(int grade){
        if(grade>=60)
        cout<<"first"<<endl;
        else if(grade>=50)
        cout<<"second"<<endl;
        else if(grade>=40)
        cout<<"third"<<endl;
        else
        cout<<"fail"<<endl;
    }
};
int main(){
    student s;
    string name ;
    int rollno;
    int grade;
    cin>>name;
    cin>>rollno;
    cin>>grade;
    s.display(name);
    s.display(rollno);
    s.displaygrade(grade);
    return 0;
}