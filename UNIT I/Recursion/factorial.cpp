/*Write a C++ program to print the factorial of N Numbers using the recusrsion*/

#include<iostream>
using namespace std;

int factorial(int number){
    if(number == 0 || number == 1){
        return 1;
    }
    
    return number * factorial(number - 1);
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    cout<<"Factorial of "<<number<<" : "<<factorial(number);

    return 0;

}