// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int arr[] = {10, 20, 30};
 int *p = arr;
 cout << *p++ << " ";  //10
 cout << *p + 5 << endl;  // 20 +5 = 25
 return 0;
}