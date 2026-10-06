/*Documentation
Write a C++ program to generate the series 1 – 2 + 3 – 4 + … up to N terms and find its sum.

Date : 13/08/2026
Author : Anand Kumar
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    cout << "The total Sum is : " << sum;
    return 0;
}