// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int a = 3, b = 8;
 (a > b ? a : b) = 100;
 cout << a << " " << b << endl; // 3 100
 return 0;
}