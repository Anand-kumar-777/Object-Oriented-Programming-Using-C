/*
Documentation
Write a C++ program using nested loops to print an inverted pyramid star pattern.

Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Rows : ";
    cin>>number;

    for(int i = number; i>= 1; i--){
      for(int j = 1; j<= number - i; j++){
        cout<<" ";
      }
      for(int k = 1; k<=(2 * i - 1); k++){
        cout<<"*";
      }
      cout<<endl;
    }

    return 0;
}