/*Documentation
Write a C++ program to convert a decimal number to binary using loops.

Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Decimal Number : ";
    cin>>number;
    int binaryDigit[32];
    int index = 0;

    if (number < 0) {
        cout << "Please enter a non-negative number.";
        return 0;
    }

    if (number == 0) {
        cout << "Binary number: 0";
        return 0;
    }

    while(number != 0){
        int remainder = number % 2;
        binaryDigit[index] = remainder;
        index++;
        number /=2;
    }

     cout << "Binary number: ";

    for (int i = index - 1; i >= 0; i--) {
        cout << binaryDigit[i];
    }
    return 0;
}