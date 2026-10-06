// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int a = (1, 2, 3);
 int b = (a += 2, a * 3);  // 5 15
 cout << a << " " << b << endl;
 return 0;
}
