// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int i = 5, j = 5;
 bool r1 = i++ > 5 && ++j > 5;
 cout << r1 << " " << i << " " << j << endl;
 bool r2 = i > 5 || j++ > 5;
 cout << r2 << " "<< i<<" " << j << endl;
 return 0;
}
