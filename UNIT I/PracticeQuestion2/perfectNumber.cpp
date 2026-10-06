/*
Write a C++ program to check whether a number is Perfect using a simple loop.

Date  : 06-08-2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a Positive Number : ";
    cin>>number;

    int sum = 0;
    if(number > 0 ){
       cout<<number<<" is a positive number."<<endl;
    } else{
        cout<<"Invalid Number! you didn't enter positive number.";
    };

    //finding the all proper divisors of the number and adding them
    for(int i =1; i<number; i++){
          if(number % i == 0){
            sum += i;
            cout<<i<<" ";
          }
       }

    cout<<"Total sum of Number : "<<sum<<endl;

    if(sum == number){
        cout<<number<<" is a perfect number.";
    }else{
        cout<<number<<" is not a perfect number.";
    }

    return 0;
}