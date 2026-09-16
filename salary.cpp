// to store monthly salary of employees in a vector and i) display the salary of all employees using range for loop ii) calculate the average salary of employees iii) display the salary of employees who are getting more than 50000 salary iv)calculate total salary of all employees v) highest salary of employees
#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
vector <double> arr;
int x;
for(int i = 0 ; i< 10  ; i++)
{
    
cin>>x;
arr.push_back(x);
}
int sum = 0 ;
for(auto n : arr)
{
    cout<<n<<"  ";
}
cout<<endl;
for(auto n : arr) 
{
    sum = sum + n ;
}
cout<<"SUM : " <<sum;
cout<<endl;
int m = arr[0];
for(auto n : arr)
{
    if(n>m)
    m = n ;
}
cout<<"MAX :"<<m ;
cout<<endl;
int c = 0 ;
for(auto n : arr)
{
    if(n>50000)
    c++;
}
cout<<"GREATER THAN 50: "<<c;
cout<<endl;
cout<<"AVG : "<<sum/10;

}
