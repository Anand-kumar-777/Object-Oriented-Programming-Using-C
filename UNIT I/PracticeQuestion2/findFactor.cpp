/*
Write a C++ program to find all factors of a number using a simple loop.


Date : 09/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;

    cout<<"Factors of : "<<number<<" are : ";

    for(int i = 1; i<=number; i++){
        if(number % i == 0){
            cout<<i<<" ";
        }
    }

    return 0;
}