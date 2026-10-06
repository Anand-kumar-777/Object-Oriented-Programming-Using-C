//Write a C++ program to input three numbers and find the largest and smallest number using if-else.
#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The largest number is: ";
    if(num1 >= num2 && num1 >= num3) {
        cout << num1 << endl;
    } else if(num2 >= num1 && num2 >= num3) {
        cout << num2 << endl;
    } else {
        cout << num3 << endl;
    }
}