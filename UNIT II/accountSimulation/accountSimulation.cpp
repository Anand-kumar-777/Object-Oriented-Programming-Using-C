/* Write a program for Dynamic Bank Account Simulation */

#include <iostream>
#include <limits>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolderName;
    double balance;
    bool accountCreated;

public:
    BankAccount()
    {
        balance = 0;
        accountCreated = false;
    }

    void createAccount(string accNum, string accHolderName, double initialBalance)
    {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = initialBalance;
        accountCreated = true;
    }

    void displayAccountDetails()
    {
        if (!accountCreated)
        {
            cout << "Account not created." << endl;
            return;
        }

        cout << "\n**** Account Details ****" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: ₹" << balance << endl;
        cout<<"\n";
    }

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid deposit amount." << endl;
            return;
        }

        balance += amount;

        cout << "Amount deposited successfully." << endl;
        cout << "New Balance: ₹" << balance << endl;
        cout<<"\n";
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
            return;
        }

        if (amount > balance)
        {
            cout << "Insufficient Balance." << endl;
            return;
        }

        balance -= amount;

        cout << "Amount withdrawn successfully." << endl;
        cout << "New Balance: ₹" << balance << endl;
        cout<<"\n";
    }

    void checkBalance()
    {
        cout << "Current Balance: ₹" << balance << endl;
        cout<<"\n";
    }

    string getAccountNumber()
    {
        return accountNumber;
    }
};

int main()
{

    cout << "***** WELCOME TO BANK ACCOUNT SIMULATION PROGRAM *****" << endl;
    int size;

    do
    {
        cout << "Enter the number of accounts you want to create: " << endl;
        cin >> size;

        if (size <= 0)
        {
            cout << "Number of account must be greater than 0." << endl;
        }

    } while (size <= 0);

    BankAccount *accounts = new BankAccount[size];

    int accountCount = 0;
    int choice;

    do
    {
        cout << "1. Create Account" << endl;
        cout << "2. Display Account" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Check Balance" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (accountCount == size)
            {
                cout << "Maximum account limit reached." << endl;
                break;
            }

            string accNum;
            string accHolderName;
            double initialBalance;
            bool exists = false;

            cout << "Enter Account Number: ";
            cin >> accNum;

            // Validating the new account if already exists

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i].getAccountNumber() == accNum)
                {
                    exists = true;
                    break;
                }
            }

            if (exists)
            {
                cout << "Bank Account is Already exists." << endl;
                break;
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Account Holder Name: ";
            getline(cin, accHolderName);

            cout << "Enter Initial Balance: ₹";
            cin >> initialBalance;

            if (initialBalance < 0)
            {
                cout << "Initial balance cannot be negative." << endl;
                break;
            }

            accounts[accountCount].createAccount(
                accNum,
                accHolderName,
                initialBalance
            );

            accountCount++;

            cout << "Account created successfully!" << endl;

            break;
        }

        case 2:
        {
            string accNum;

            cout << "Enter Account Number: ";
            cin >> accNum;

            bool found = false;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i].getAccountNumber() == accNum)
                {
                    accounts[i].displayAccountDetails();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }

            break;
        }

        case 3:
        {
            string accNum;
            double amount;

            cout << "Enter Account Number: ";
            cin >> accNum;

            bool found = false;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i].getAccountNumber() == accNum)
                {
                    cout << "Enter amount to deposit: ₹";
                    cin >> amount;

                    accounts[i].deposit(amount);

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }

            break;
        }

        case 4:
        {
            string accNum;
            double amount;

            cout << "Enter Account Number: ";
            cin >> accNum;

            bool found = false;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i].getAccountNumber() == accNum)
                {
                    cout << "Enter amount to withdraw: ₹";
                    cin >> amount;

                    accounts[i].withdraw(amount);

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }

            break;
        }

        case 5:
        {
            string accNum;

            cout << "Enter Account Number: ";
            cin >> accNum;

            bool found = false;

            for (int i = 0; i < accountCount; i++)
            {
                if (accounts[i].getAccountNumber() == accNum)
                {
                    accounts[i].checkBalance();

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Account not found." << endl;
            }

            break;
        }

        case 6:
            cout << "Exiting program." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 6);

    delete[] accounts;

    return 0;
}