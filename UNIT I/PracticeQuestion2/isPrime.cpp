/* Docuementation:
Write a C++ program to check whether a given number is Prime using a simple loop.
Date - 06-08-2026
Author - Anand Kumar
*/



#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a Number: ";
    cin>>number;

    bool isPrime = true;

    for(int i=2; i<number; i++){
        if(number%i==0){
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << number << " is a Prime number." << endl;
    } else {
        cout << number << " is not a Prime number." << endl;
    }

    return 0;
}