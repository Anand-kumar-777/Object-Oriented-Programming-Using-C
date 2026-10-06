/*
Write a C++ program to reverse a number using a simple loop.

Date : 06-08-2026
Author : Anand Kumar
*/


#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int originalNumber = number;
    int reversedNumber = 0;

 //reversing the number using a loop
    while(number !=0 ){
        int lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number /= 10;
    }

    cout<<"Oiginal Number : "<<originalNumber<<endl;
    cout<<"Reversed Number : "<<reversedNumber<<endl;

    return 0;
}