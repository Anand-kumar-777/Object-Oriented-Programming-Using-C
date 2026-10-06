//Write a C++ program to generate the Fibonacci series for n terms using a loop.
#include<iostream>
using namespace std;

int main(){
    int num, first = 0, second = 1, next;
    cout << "Enter the number of terms: ";

    cin >> num;
    cout << "Fibonacci Series: ";
    for(int i = 0; i <num; i++){
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }
}