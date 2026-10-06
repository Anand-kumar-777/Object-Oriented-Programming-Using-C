/*
Documentation
Write a C++ program to calculate the address of an element
in a 2D Array using Row Major Order.

Date : 18/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    int baseAddress;
    int rowIndex, columnIndex;
    int elementSize;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    cout << "Enter Base Address: ";
    cin >> baseAddress;

    cout << "Enter size of each element in bytes: ";
    cin >> elementSize;

    cout << "Enter row index of element: ";
    cin >> rowIndex;

    cout << "Enter column index of element: ";
    cin >> columnIndex;

    if (rowIndex < 0 || rowIndex >= rows ||
        columnIndex < 0 || columnIndex >= columns) {
        cout << "Invalid index!" << endl;
        return 0;
    }

    int address = baseAddress +
                  elementSize * (rowIndex * columns + columnIndex);

    cout << "Address of A[" << rowIndex << "]["
         << columnIndex << "] = " << address << endl;

    return 0;
}