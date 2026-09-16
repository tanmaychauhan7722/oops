
 //write c++ program to store attandence of 6 students in a vector use range for loop to display and count how many student have more than 75% attandence
#include<vector>
#include<iostream>
using namespace std;
 int main() {
    vector<double> num={48.9,58,87.89,78.38,74.9,81.24};
    int count=0;
    for(auto val: num) {
        if(val>75)
        count++;
        
    }
    cout << "Above 75% :- " << count << endl;
 }