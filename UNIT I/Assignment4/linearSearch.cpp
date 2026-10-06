/*Documentation
Write a C++ programm to on Linear Search to find an element using the user input

Date : 10/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the number of elements in the array : ";
    cin >> size;
    int scores[100];
    int targetNumber;
    int foundIndex = -1;

    if (size <= 0 || size > 100)
    {
        cout << "Please enter a size between 1 and 100.";
        return 0;
    }
    // Taking array elements
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << " : ";
        cin >> scores[i];
    }

    // Display array elements
    cout << "Array elements: ";

    for (int i = 0; i < size; i++)
    {
        cout << scores[i] << " ";
    }

    cout << "Enter the Target Number : ";
    cin >> targetNumber;
    // Finding the element using the loop

    for (int i = 0; i < size; i++)
    {
        if (targetNumber == scores[i])
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        cout << targetNumber << " found at index " << foundIndex << ".";
    }
    else
    {
        cout << targetNumber << " is not present in the array.";
    }

    return 0;
}