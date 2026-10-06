/*
Write a C++ program to find the sum of digits of a number using a simple loop.

Date : 06-08-2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main(){
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    // Loop to calculate the sum of digits
    while (number != 0) {
        sum = sum + number % 10;
        number = number /10;
    }

    cout<<"Sum of digits: "<<sum<<endl;
}