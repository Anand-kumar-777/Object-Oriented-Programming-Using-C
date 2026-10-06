/*
Write a C++ program to find the sum of first N natural numbers (also even and odd separately).

Date : 06-08-2026
Author : Anand Kumar

*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int sum=0;


    for(int i=1; i<=number; i++){
        sum += i; // Sum of first N natural numbers
    }

    cout<<"Sum of first "<<number<<" natural numbers is : "<<sum<<endl;
    

    return 0;
}