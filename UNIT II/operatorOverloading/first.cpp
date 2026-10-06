/*
2. Write program to perform Addition and Subtraction by Friend Function
   using Function Overloading.

Date : 14/09/2026
Author : Anand Kumar
Organization : CUHP
*/

#include <iostream>
using namespace std;
class Number
{
private:
    int value;

public:
    void setValue(int v)
    {
        value = v;
    }

    friend int operator+(Number N1, Number N2);
    friend int operator-(Number N1, Number N2);
    friend int operator*(Number N1, Number N2);
    void display()
    {
        cout << "Value : " << value << endl;
    }
};

int operator+(Number N1, Number N2)
{

    return N1.value + N2.value;
}

int operator-(Number N1, Number N2)
{

    return N1.value - N2.value;
}

int operator*(Number N1, Number N2)
{

    return N1.value * N2.value;
}

int main()
{
    Number N1, N2;
    int result;
    N1.setValue(12);
    N2.setValue(8);
    result = N1 + N2;
    cout << "Addition = " << result << endl;

    result = N1 - N2;
    cout << "Subtraction = " << result << endl;

    result = N1 * N2;
    cout << "Multiplication = " << result << endl;

    return 0;
}