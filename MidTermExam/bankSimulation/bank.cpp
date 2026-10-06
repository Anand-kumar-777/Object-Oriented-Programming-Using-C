//Bank Simulation program using classes and object

#include<iostream>
using namespace std;

class Bank{
    //Declare all variable into the Public Specifier if it does not describe into question
    private:
    long long int accNumber;
    float accBalance;
    protected:
    string accType;
    public:
    string bankName;
    string accHolName;

    
    void createAccount(){
        cout<<"**** Welcome to Bank Simulation Program ****"<<endl;
        cout<<"Enter Bank Name: ";
        getline(cin,bankName);
        cout<<"Account Type : ";
        getline(cin,accType);
        cout<<"Enter Account Holder Name: ";
        getline(cin,accHolName);
        cout<<"Enter Account Number: ";
        cin>>accNumber;
        cout<<"Enter the Initial Account Balance: ";
        cin>>accBalance;
    }

    void displayAccount(){
        cout<<"Bank Name: "<<bankName<<endl;
        cout<<"Account Type: "<<accType<<endl;
        cout<<"Account Holder Name: "<<accHolName<<endl;
        cout<<"Account Number: "<<accNumber<<endl;
        cout<<"Account Balance: "<<accBalance<<endl;
        
    }

    void checkBalance(){
        cout<<"Your Current Balance : "<<accBalance<<endl; 
    }

    void deposit(int amount){
        cout<<"Enter deposit Amount : ";
        cin>>amount;

        if(amount > 0){
            accBalance += amount;
            cout<<"Amount Deposited Successfully."<<endl;
            cout<<"New Balance is : "<<accBalance<<endl;
        } else{
            cout<<"Amount should be greater than 0.";
        }
    }

    void deposit(int amount){
        cout<<"Enter Withdraw Amount : ";
        cin>>amount;

        if(amount > 100){
            accBalance -= amount;
            cout<<"Amount Withdraw Successfully."<<endl;
            cout<<"New Balance is : "<<accBalance<<endl;
        } else{
            cout<<"Amount should be greater than 100.";
        }
    }
};

int main(){
    int choice;
    do{
        cout << "1. Create Account" << endl;
        cout << "2. Display Account" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Check Balance" << endl;
        cout << "6. Exit" << endl;

        cout<<"Enter Your Choice : ";
        

    }while(choice != 6);

    return 0;
}