// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int x = 7;
 int y = x++ + 2;
 int z = ++x * 2;
 cout << x << " " << y << " " << z << endl; // 9 9 18
 return 0;
}
