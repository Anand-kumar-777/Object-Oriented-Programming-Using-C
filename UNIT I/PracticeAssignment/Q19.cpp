//  What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int a = 2, b = 3, c = 4;
 a += b -= c <<= 1;
 cout << a << " " << b << " " << c << endl;  // -3 -5 8
 return 0;
}
