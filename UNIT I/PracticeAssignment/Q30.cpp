// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int arr[6] = {1, 2, 3};
 int *p = arr;
 cout << sizeof arr / sizeof *arr << " " << sizeof(arr[0] +
1.5) << endl;  // 6 8=> size of arr = 24 / 4 = 6, 8
 return 0;
}