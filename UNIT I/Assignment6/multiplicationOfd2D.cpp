/*Documentation
Write a c++ program to calculate the Multiplication of 2D Array

Date : 16/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main()
{
    int rowSize1, colSize1, rowSize2, colSize2;

    cout << "Enter the Size of First Matrix Row : ";
    cin >> rowSize1;
    cout << "Enter the Size of First Matrix Column : ";
     cin>>colSize1;

    cout << "Enter the Size of Second Matrix Row : ";
    cin >> rowSize2;
    cout << "Enter the Size of Second Matrix Column : ";
    cin>>colSize2;

    int matrix1[10][10];
    int matrix2[10][10];
    int multiplication[10][10];

    if (rowSize1 > 10 || colSize1 > 10)
    {
        cout << "Maximum matrix size is 10 x 10";
        return 0;
    }

    // Matrix Multiplication Condition
    if (colSize1 != rowSize2)
    {
        cout << "Matrix Multiplication is not possible.";
        return 0;
    }

    cout << "\nEnter elements of first matrix : \n";

    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize1; j++)
        {
            cout << "Enter the value at index : " << i << " " << j << " : ";
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter elements of second matrix : \n";

    for (int i = 0; i < rowSize2; i++)
    {
        for (int j = 0; j < colSize2; j++)
        {
            cout << "Enter the value at index : " << i << " " << j << " : ";
            cin >> matrix2[i][j];
        }
    }

    // Multiplication
    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize2; j++)
        {

            multiplication[i][j] = 0;

            for (int k = 0; k < colSize1; k++)
            {
                multiplication[i][j] +=
                    matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display
    cout << "\nMultiplication of 2D matrix : " << endl;

    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize2; j++)
        {
            cout << multiplication[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}