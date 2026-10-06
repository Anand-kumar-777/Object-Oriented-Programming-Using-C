//  What will be the output of the following code?
#include <iostream>
using namespace std;
int value = 20;
int main() {
 int value = 8;
 int r = ::value / value + ::value % value;  // 20 / 8 = 2, + 20 % 8 = 4
 cout << r << endl;
 return 0;
}
