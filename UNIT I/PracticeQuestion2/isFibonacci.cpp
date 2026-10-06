/*
Documentation
Write a C++ program to check whether a number belongs to the Fibonacci series.

Date : 10/08/2026
Author : Anand Kumar
*/


#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;

    if(number<0){
        cout<<"Number does not belong to the Fibonacci : "<<number;
        return 0;
    }

    int first  = 0;
    int second = 1;
    while(first< number){
        int next = first + second;
        first = second;
        second = next;
    }

    if(first == number){
        cout<<number<<" belongs to the Fibonnaci Series.";
    } else{
        cout<<number<<" does not belong to the fibonacci series.";
    }

    return 0;

}