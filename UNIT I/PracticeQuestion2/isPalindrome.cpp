/*Write a C++ program to check whether a number is Palindrome using a simple loop.


Date : 06-08-2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main(){
    int number;
    int orgNum;
    int revNum = 0;
    cout << "Enter a number: ";
    cin >> number;
    orgNum = number;

    // Loop to reverse the number
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        revNum = revNum * 10 + digit; // Build the reversed number
        number /= 10; // Remove the last digit from the original number
    }

    // Check if the original number is equal to the reversed number
    if (orgNum == revNum) {
        cout << orgNum << " is a Palindrome number." << endl;
    } else {
        cout << orgNum << " is not a Palindrome number." << endl;
    }

    return 0;
}