/*Write a C++ program to print the N natural Number using the*/

#include<iostream>
using namespace std;

void printNumber(int number){
    if(number == 1){
        cout<<number<<" ";
    } else{
        printNumber(number - 1);
        cout<<number<<" ";
    }
}

int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;
    printNumber(number);

    return 0;
}