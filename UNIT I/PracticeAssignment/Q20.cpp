// 20. What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int flags = 1 << 2 | 1 << 4;  //20
 flags &= ~(1 << 2);  //16
 flags |= 1;  // 17
 flags ^= 3;  //18
 cout << flags << " " << (flags >> 2 & 1) << endl; // 18 0
 return 0;
}
