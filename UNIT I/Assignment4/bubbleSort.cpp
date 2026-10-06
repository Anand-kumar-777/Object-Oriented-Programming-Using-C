/*
Documetation
Write a C++ program to sort an array using the Bubble Sort Algorithm

Date : 16/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of your array : ";
    cin >> size;
    int elements[100];
    if (size <= 0 || size > 100)
    {
        cout << "Please enter the a size between 1 to 100.";
        return 0;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Please enter element at index " << i << " : ";
        cin >> elements[i];
    }

    cout << "Stored Elements : ";
    for (int i = 0; i < size; i++)
    {
        cout << elements[i] << " ";
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (elements[j] > elements[j + 1])
            {
                int temp = elements[j + 1];
                elements[j + 1] = elements[j];
                elements[j] = temp;
            }
        }
    }

    cout << "\nSorted Elements by Bubble Sort : ";
    for (int i = 0; i < size; i++)
    {
        cout << elements[i] << " ";
    }

    return 0;
}