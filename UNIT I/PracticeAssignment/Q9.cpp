//  What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int x = 17;
 x %= 5 + 2;  // x = x % 5 + 2 = 3
 x *= 4 - 1;  // x = x * 4 - 1  = 9
 x /= 2;      // x = x / 2 == 4.5
 cout << x << endl;    // 4 
 return 0;
}

