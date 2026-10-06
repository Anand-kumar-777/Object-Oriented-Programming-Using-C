/*Write a C++ program to print the fibonacci series using the recusion*/

#include <iostream>
using namespace std;

int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}

void printFibo(int number, int current = 0)
{
    if (current == number)
    {
        return;
    }

    cout << fibonacci(current) << " ";
    printFibo(number, current + 1);
}

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    cout<<"Fibonacci Series : ";
    printFibo(number);

    return 0;
}