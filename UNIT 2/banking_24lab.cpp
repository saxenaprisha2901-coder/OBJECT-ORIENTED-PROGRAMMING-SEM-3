#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;          
protected:
    int accountNumber;       
public:
    string name;             

    BankAccount(string n, int accNo, double initialBalance)
    {
        name = n;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account("Prisha", 12345, 5000);

    cout << "Account Holder: " << account.name << endl;

    account.deposit(2000);

    account.withdraw(1500);

   account.display();

    return 0;
}