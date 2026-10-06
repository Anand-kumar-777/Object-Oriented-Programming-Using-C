// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 bool result = 0 && 1 || 1 && 1;  //True (1)
 cout << result << endl;
 return 0;
}