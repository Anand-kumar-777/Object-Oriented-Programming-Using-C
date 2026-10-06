/*Write program, create 3 Data member in a class
 and Load Unary operator by using the Classes and Object
 (You can also use Friend function).
 Date : 14/09/2026
 Author : Anand Kumar
 Organizaion : CUHP
*/

#include <iostream>
using namespace std;

class Number
{
private:
    int number1, number2, number3;

public:
    void setValue(int a, int b, int c)
    {
        number1 = a;
        number2 = b;
        number3 = c;
    }

    void operator++()
    {
        ++number1;
        ++number2;
        ++number3;
    }
    void display()
    {
        cout << "Number 1 = " << number1 << endl;
        cout << "Number 2 = " << number2 << endl;
        cout << "Number 3 = " << number3 << endl;
    }
};

int main()
{
    Number N1;
    N1.setValue(10, 20, 30);
    cout << "Before Increment : " << endl;
    N1.display(); // Displaying value before increament
    ++N1;
    cout << "After Increment : " << endl;
    N1.display(); // After increment

    return 0;
}