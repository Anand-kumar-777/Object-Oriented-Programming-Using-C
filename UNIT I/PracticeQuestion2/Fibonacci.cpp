/* Docuementation:
Write a C++ program to print the Fibonacci series up to N terms using a simple loop.

Date - 06-08-2026
Author - Anand Kumar
*/



#include<iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number of terms: ";
    cin >> number;

    int first = 0, second = 1, next;

    cout<<"Fibonacci Series: ";
    for(int i = 0; i<number; i++){
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}