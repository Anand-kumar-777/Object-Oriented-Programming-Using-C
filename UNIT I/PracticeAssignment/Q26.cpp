// What will be the output of the following code?
#include <iostream>
using namespace std;
struct Node { int data; };
int main() {
 Node n = {7};
 Node *p = &n;
 p->data += 3;
 int r = p->data * 2 > 15 ? --p->data : p->data++;
 cout << r << " " << n.data << endl;  // 9 9
 return 0;
}