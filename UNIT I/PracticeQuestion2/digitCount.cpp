/*Write a C++ program to count the number of digits in a given number.

Date : 06-08-2026
Author : Anand Kumar
*/


#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int temp = number;

    int digitCount = 0;
    do{
        digitCount++;
        temp /= 10;

    }while(temp != 0);

    cout<<"The total no of digits "<<digitCount<<" in the "<<number;

    return 0;
}