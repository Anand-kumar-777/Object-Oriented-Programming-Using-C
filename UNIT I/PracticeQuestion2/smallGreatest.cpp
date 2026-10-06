/*Documentation
Write a C++ program to find the largest and smallest digit in a given number.

Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;
    int smallest = 9;
    int largest = 0;

    // Convert a negative number into positive
    if (number < 0) {
        number = -number;
    }

    do{
        int lastDigit = number % 10;
        if(lastDigit > largest ){
            largest = lastDigit;
        }

        if(lastDigit < smallest){
            smallest = lastDigit;
        }

        number /= 10;
    } while(number != 0);

    cout << "Largest digit: " << largest << endl;
    cout << "Smallest digit: " << smallest << endl;

    return 0;


}