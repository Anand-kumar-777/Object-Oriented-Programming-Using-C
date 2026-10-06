//  What will be the output of the following code?
#include <iostream>
using namespace std;
int main() {
 int marks = 65;
 char grade = marks >= 80 ? 'A' : marks >= 60 ? 'B' : 'C';  //B
 cout << grade << endl;
 return 0;
}
