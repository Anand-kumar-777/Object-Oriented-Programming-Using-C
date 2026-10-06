// Binary Search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size)
{
    int target;
    cout << "Enter the Target Element : ";
    cin >> target;
    int low = 0;
    int high = size - 1;

    bool isFound = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            cout << "Element found : " << arr[mid];
            isFound = true;
            break;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return 0;
};

int main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;

    int arr[size];
    cout<<"! Enter the elements in Decending order."<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Value at position " << i + 1<< " : ";
        cin >> arr[i];
    }
    cout << "Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    binarySearch(arr, size);

    return 0;
}