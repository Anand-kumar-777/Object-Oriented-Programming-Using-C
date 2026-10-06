/*Documentation
Write a C++ program to calculate the sum of the first N terms of the Fibonacci series.

Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number of Fibonacci : ";
    cin>>number;

    int first = 0;
    int second = 1;
    int sum = 0;
    
    for(int i = 0; i<number; i++){
        cout<<first<<" ";
        sum += first;
        int next = first + second;
        
        first = second;
        second = next;
    }

    cout<<"The Sum is "<<sum<<" of "<<number<<" fibonacci Number.";

    return 0;
}