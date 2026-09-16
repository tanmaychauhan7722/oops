#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
    int accountNumber;
    string Name;
    double balance;

public:
    BankAccount(int a, string n, double b)
    {
        accountNumber = a;
        Name = n;
        balance = b;
    }

    friend void compareBalance(const BankAccount&, const BankAccount&);
};

void compareBalance(const BankAccount& a, const BankAccount& b)
{
    if(a.balance > b.balance)
        cout << a.Name << " has higher balance";
    else
        cout << b.Name << " has higher balance";
}

int main()
{
    BankAccount a(101, "Rahul", 50000);
    BankAccount b(102, "Aman", 70000);

    compareBalance(a, b);

    return 0;
}