// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int x = 6;
 cout << (x & 4 && x | 1) << " " << (x | 0 && 0) << endl;  // 1 0
 return 0;
}
