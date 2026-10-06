#include <iostream>
using namespace std;

int bubleSort(int arr[], int size)
{
    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "\nSorted Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
};

int main()
{
    int size;
    cout << "Enter the array Size : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element at " << i + 1 << " position : ";
        cin >> arr[i];
    }

    cout << "Entered Array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    bubleSort(arr, size);
    

    return 0;
}