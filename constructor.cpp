#include<iostream>
using namespace std;
class cons{
    string name;
    double marks;
    cons(){
        cout<<"Default Constructor"<<endl;
    }
    cons(string n, double m){
        name=n;
        marks=m;
    }
    cons(const cons &c){
        name=c.name;
        marks=c.marks;
    }
    void show(){
        cout<<name<<endl;
        cout<<"percentage"<<marks/3<<endl;
    }
};
        