/*
Write a C++ program using nested loops to print a full multiplication table grid (1 to N).

Date : 09/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    for(int i = 2; i<=number; i++){
        for(int j = 1; j<=10; j++){
            cout<<i * j<<" ";
        }
        cout<<endl;
    }
}