/*
Documentation
Write a C++ program using nested loops to print an alphabet pyramid pattern.
     A 
   A B C 
  A B C D E 
 A B C D E F G 
A B C D E F G H I 

Date : 10/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter Number of Rows : ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= number - i; j++)
        {
            cout << " ";
        }

        // Inner loop to print the Alphabet
        for (int k = 1; k <= (2 * i - 1); k++, ch++)
        {
            cout << ch << " ";
        }
        cout<<endl;
    }
    return 0;
}