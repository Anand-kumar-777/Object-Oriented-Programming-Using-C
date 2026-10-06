// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int p = 3, q = 2;
 int val = (q *= p, p += q, p > 8); // q = 6, p = 9, 1
 cout << val << " " << p << " " << q << endl; // 1 9 6
 return 0;
}
