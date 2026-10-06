/* Docuementation:
Write a C++ program to print all Prime numbers between 1 and N using loops.

Date - 06-08-2026
Author - Anand Kumar
*/


#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Number: ";
    cin >> number;

    for(int i = 2; i<=number; i++){
        bool isPrime = true;  
        for(int j = 2; j * j <= i; j++){
            if(i % j== 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout<<i<<" ";
        }
    }


    return 0;
}