#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    double balance;

public:
    // Function to set the account number and initial balance
    void setInitialValues(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Function to deposit an amount into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " into account " << accountNumber 
                 << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount for account " << accountNumber << "." << endl;
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance in account " << accountNumber 
                 << ". Withdrawal failed." << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber 
                 << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount for account " << accountNumber << "." << endl;
        }
    }

    // Function to display the current balance
    void displayBalance() const {
        cout << "Account " << accountNumber << " balance: " << balance << endl;
    }

    // Function to get the account number
    int getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    const int numAccounts = 5;
    Account accounts[numAccounts];

    // Input initial values for each account
    for (int i = 0; i < numAccounts; ++i) {
        int accNum;
        double initialBalance;

        cout << "Enter account number for account " << (i + 1) << ": ";
        cin >> accNum;
        cout << "Enter initial balance for account " << accNum << ": ";
        cin >> initialBalance;

        accounts[i].setInitialValues(accNum, initialBalance);
    }

    // Perform operations on each account
    for (int i = 0; i < numAccounts; ++i) {
        double depositAmount, withdrawAmount;

        cout << "Account " << accounts[i].getAccountNumber() << ":" << endl;
        
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        accounts[i].deposit(depositAmount);

        cout << "Enter amount to withdraw: ";
        cin >> withdrawAmount;
        accounts[i].withdraw(withdrawAmount);

        accounts[i].displayBalance();
    }

    return 0;
}
