/*
Write a C++ program to find GCD and LCM of two numbers using loops.

Date : 06-08-2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number1, number2;
    cout<<"Enter two positive Numbers : ";
    cin>>number1>>number2;

    int temp1 = number1;
    int temp2 = number2;

    while(temp2 != 0){
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }

    int gcd = temp1;

    int lcm = (number1 / gcd ) * number2;

    cout << "GCD of " << number1 << " and " << number2 << " is: " << gcd << endl;
    cout << "LCM of " << number1 << " and " << number2 << " is: " << lcm << endl;

    return 0;
}