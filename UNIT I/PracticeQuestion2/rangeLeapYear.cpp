/*
Documentation
Write a C++ program to check leap years in a given range of years using loops.

Date : 13/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int year1, year2;
    cout << "Enter the Starting range Year : ";
    cin >> year1;
    cout << "Enter the End range Year : ";
    cin >> year2;

    cout << "\nLeap Years from " << year1 << " to " << year2 << " : ";
     
    for(int i = year1; i <= year2; i++){
        // Check if current year 'i' is a leap year
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}