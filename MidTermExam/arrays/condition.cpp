//Write a C++ program to input a year and determine whether it is a leap year or not. Also handle century years correctly.
#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
}