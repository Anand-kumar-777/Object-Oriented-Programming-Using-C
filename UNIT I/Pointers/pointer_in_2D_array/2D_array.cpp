/*Documentation
Write a C++ program on pointer of 2D matrix
/
Date : 20/08/2026
Author : Anand Kumar
Organization : CUHP
Designation : Student
*/

#include <iostream>
using namespace std;

int main()
{
    int rowSize1, colSize1;
    cout << "Enter the Row Size of your Matrix : ";
    cin >> rowSize1;
    cout << "Enter the Column size of your Matrix : ";
    cin >> colSize1;

    int matrix[rowSize1][colSize1];

    // Initialization of Element in matrix using pointer
    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize1; j++)
        {
            cout << "Enter the elements at index " << i << " " << j << " : ";
            cin >> *(*(matrix + i) + j);
        }
    }

    // Displaying the elements using the pointer
    cout << "Matrix : " << endl;
    for (int i = 0; i < rowSize1; i++)
    {
        for (int j = 0; j < colSize1; j++)
        {
            cout << *(*(matrix + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}