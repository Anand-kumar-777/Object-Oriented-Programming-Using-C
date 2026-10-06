/*
Write a C++ program to print the multiplication table of a number using a simple loop.


Date : 06-08-2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main(){
    int number;
    cout<< "Enter a number : ";
    cin>> number;

    //printing the multiplication table using a simple loop
    for(int i=1; i<=10; i++){
        cout<<number<<" x "<<i<<" = "<<number*i<<endl;
    }

    return 0;
}