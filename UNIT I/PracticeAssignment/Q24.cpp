// What will be the output of the following code?
#include <iostream>
using namespace std;
struct Box { int len; };
int main() {
 Box b = {4};
 int r = (b.len++ > 4) ? b.len * 2 : b.len + 10;
 cout << r << " " << b.len << endl;
 return 0;
}
