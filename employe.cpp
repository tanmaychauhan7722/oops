#include<iostream>
#include<string>
using namespace std;
class employe{
    private:
   int id;
    string name;
    double salary;
    public:
    void input(int i,string n,double s){
        id=i;
        name=n;
        salary=s;
    }
    void display(){
        cout<<"Id="<<id<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Salary="<<salary<<endl;
    }
};
int main(){
    int i;
    string n;
    double s;
    cin>>i;
    cin>>n;
    cin>>s;
    employe e;
    e.input(i,n,s);
    e.display();

}

