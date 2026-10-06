#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 8, 4, 9};
    int *p = &arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << (p + i) << " ";          // Displaying the address of Elements
        cout << *(p + i) << " " << endl; // Displaying the stored value at index
    }
}