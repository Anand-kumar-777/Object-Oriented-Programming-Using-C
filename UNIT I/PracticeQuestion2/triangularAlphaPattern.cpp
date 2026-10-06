/*
Documentation
Write a C++ program using nested loops to print continuous alphabet pattern in triangular form.
A 
B C 
D E F 
G H I J 
K L M N O 
P Q R S T U 
V W X Y Z 

Date : 13/08/2026
Author : Anand Kumar
*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number of rows for alphabet : ";
    cin >> number;
    char ch = 'A';

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            if (ch == 'Z')
            {
                return 0;
            }
            ch = 'A' + (ch - 'A' + 1) % 26;
        }
        cout << endl;
    }
    return 0;
}