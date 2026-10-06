/*
Write a C++ program to find the sum of first Even natural numbers.

Date : 06-08-2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number : ";
    cin >> number;
    int evenSum = 0;

    cout << "Even natural Numbers : " << endl;
    for(int i = 1; i <= number; i++){
        int currentEven = 2 * i;
        evenSum += currentEven;
        cout << currentEven << " ";
    }

    cout << "\nSum of " << number << " Even Natural Number : " << evenSum << endl;

    return 0;
}