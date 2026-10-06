/* Docuementation:
Write a C++ program to calculate the factorial of a number using a simple loop.

Date - 06-08-2026
Author - Anand Kumar
*/


#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a Number : ";
    cin>>num;
    int factorial = 1;

    while(num > 0){
        factorial *= num;
        num--;
    }

    cout<<"Factorial is : "<<factorial<<endl;

    return 0;
}