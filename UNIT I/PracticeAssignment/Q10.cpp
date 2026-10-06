// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int a = 2, b = 5;
 int result = a > b ? a : b + 10;  //15
 cout << result << endl;
 return 0;
}