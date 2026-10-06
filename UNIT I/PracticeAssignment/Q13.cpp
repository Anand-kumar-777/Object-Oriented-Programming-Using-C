// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int x = 5;
 cout << (~x + 1) << " " << ~(x - 1) << endl;  // -5 -5
 return 0;
}
