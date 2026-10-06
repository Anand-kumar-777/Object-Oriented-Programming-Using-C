// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int arr[] = {3, 6, 9};
 int *p = arr;
 cout << ++*p << " "; // 4
 cout << *++p << " "; //6
 cout << arr[0] << endl; //4
 return 0;
}