// What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int a[5] = {2, 4, 6, 8, 10};
 cout << *(a + 3) << " " << 2[a] << " " << *a + 1 << endl; //8 , 6, 3
 return 0;
}