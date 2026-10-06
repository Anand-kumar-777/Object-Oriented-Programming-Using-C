/*
Documentation
Write a C++ program to count positive, negative and zero numbers among N inputs.
Enter the number : 4
Enter 4 numbers:
Enter the value : 5
Enter the value : -2
Enter the value : 0
Enter the value : 8

--- Results ---
Positive numbers count: 2
Negative numbers count: 1


Date : 13/08/2026
Author : Anand Kumar
*/
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    cout << "Enter " << number << " numbers:" << endl;

    for(int i = 1; i<=number; i++){
        int value;
        cout<<"Enter the value : ";
        cin>>value;

        if(value>0){
            positiveCount++;
        } else if(value<0){
            negativeCount++;
        } else{
            zeroCount++;
        }
    }

    cout << "\n--- Results ---" << endl;
    cout << "Positive numbers count: " << positiveCount << endl;
    cout << "Negative numbers count: " << negativeCount << endl;
    cout << "Zeroes count          : " << zeroCount << endl;

    return 0;

}