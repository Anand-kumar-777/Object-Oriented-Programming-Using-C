/*
Write a C++ program to calculate power (x^y) without using pow() function.

Date : 07/08/2026
Author : Anand Kumar
*/


#include<iostream>
using namespace std;

int main(){
    int base, power;
    cout<<"Enter a base number : ";
    cin>>base;

    cout<<"Enter a power : ";
    cin>>power;

    long result = 1;

   
    for(int i = 1; i<=power; i++){
      result = result * base;
    };

    cout<<"Power of your given "<<base<<" is : "<<result;

    return 0;
}