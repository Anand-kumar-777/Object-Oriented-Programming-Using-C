/*
Documentation
Write a C++ program using nested loops to print a number diamond pattern.

Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    for(int i = 1; i<=number; i++){
        for(int j = 1; j<=number - i; j++){
            cout<<" ";
        }

        for(int k = 1; k<=(2 * i - 1); k++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i =number; i>=1; i--){
        for(int j = 1; j<=number - i; j++){
            cout<<" ";
        }

        for(int k = 1; k<=(2 * i - 1); k++){
            cout<<"*";
        }

        cout<<endl;
    }
}