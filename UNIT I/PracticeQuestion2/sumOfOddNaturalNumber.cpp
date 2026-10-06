/*
Write a C++ program to find the sum of first Odd natural numbers.

Date : 06-08-2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int oddSum = 0;

    cout<<"Odd Natural Numbers : ";
    for(int i = 1; i<=number; i++){
        if(i % 2 != 0){
            oddSum += i;
            cout<<i<<" ";
        }
        
    }

    cout<<"Sum of first odd "<<number<<" Sum is "<<oddSum;

    return 0;
}