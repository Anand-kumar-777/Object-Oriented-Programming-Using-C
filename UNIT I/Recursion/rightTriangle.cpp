/*Write a C++ program to print the Right Angled Star Pattern using the recursion*/
#include <iostream>
using namespace std;

void printStarInRow(int rowSize)
{
    if (rowSize == 0)
    {
        return;
    }
    cout << "* ";
    printStarInRow(rowSize - 1);
}

void printStar(int rowSize)
{
    if (rowSize == 0)
    {
        return;
    }

    printStar(rowSize - 1);
    printStarInRow(rowSize);
    cout << endl;
}

int main()
{
    int rowSize;
    cout << "Enter the Size of Star : ";
    cin >> rowSize;

    printStar(rowSize);
    return 0;
}