/*
Write a c++ program that print the Pascal Triangle

Date : 08/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the no of rows to print the element : ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {

        //inner loop to print the Space before the element
        for(int j = 0; j<rows - i - 1; j++){
           cout<<" ";
        }
        // Innner Loop to print the element
        int value = 1;
        for (int k = 0; k <= i; k++)
        {
            cout <<value<<" ";

            value = value * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
