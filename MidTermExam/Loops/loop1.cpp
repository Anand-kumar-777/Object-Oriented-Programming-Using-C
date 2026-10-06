///Decision making statements in C++ are used to control the flow of execution based on certain conditions. The primary decision-making statements in C++ include:

// 1. **if statement**: The `if` statement allows you to execute a block of code only if a specified condition is true. If the condition is false, the code block is skipped.

//    ```cpp
//    if (condition) {
//        // Code to execute if condition is true
//    }
//    ```  

// 2. **if-else statement**: The `if-else` statement provides an alternative block of code to execute if the condition is false.

//    ```cpp
/*
Write a C++ program to input marks of a student in 5 subjects and calculate the percentage and grade using if-else.
Write a C++ program to input a year and determine whether it is a leap year or not. Also handle century years correctly.
Write a C++ program to input three numbers and find the largest and smallest number using if-else.
Write a menu-driven calculator using switch that performs addition, subtraction, multiplication, division, and modulus.
Write a C++ program using switch to create a simple ATM menu with options: Check Balance, Deposit, Withdraw, and Exit.
*/

#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the number of subjects: ";
    cin >> size;
    int marks[size] = {0};
    int sum = 0;
    for(int i = 0; i < size; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
    }
    cout << "Students marks : ";
    
    for(int i = 0; i<size; i++){
        cout<<marks[i]<<" ";

    }

    cout<<"\nPercentage of Makrs : ";
    for(int i  = 0; i<size; i++){
      sum = sum + marks[i];
    }

    float percentage = (sum / (size * 100.0)) * 100;
    cout<<percentage<<"%"<<endl;
    
    return 0;
}

