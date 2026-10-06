/***Q2. Write a C++ program to demonstrate a non-member Friend Function using three classes A, B, and C.**
Each class should have at least two private data members.
Calculate and display the average of each class, find the maximum average, and display the class and data members having the maximum average.


Date : 07/09/2026
Author : Anand Kumar
*/
#include <iostream>
using namespace std;

class A
{
private:
    int number1;
    int number2;

public:
    A(int num1, int num2)
    {
        number1 = num1;
        number2 = num2;
    };

    friend float average(A& f1);
    void display()
    {
        cout << "Data Members : " << number1 << " , " << number2 << endl;
    }
};

class B
{
private:
    int number3;
    int number4;

public:
    B(int n, int m)
    {
        number3 = n;
        number4 = m;
    }

    friend float average(B& f2);
    void display()
    {
        cout << "Data Members : " << number3 << " , " << number4 << endl;
    }
};

// Third Class
class C
{
private:
    int number5;
    int number6;

public:
    C(int x, int y)
    {
        number5 = x;
        number6 = y;
    }
    friend float average(C& f3);
    void display()
    {
        cout << "Data Members : " << number5 << " , " << number6 << endl;
    }
};

// First Class Fried function
float average(A& f1)
{
    float avg = (f1.number1 + f1.number2) / 2.0;
    return avg;
}

// Second Class function
float average(B& f2)
{
    float avg = (f2.number3 + f2.number4) / 2.0;
    return avg;
}

// Third Class function
float average(C& f3)
{
    float avg = (f3.number5 + f3.number6) / 2.0;
    return avg;
};

int main()
{
    A f1(10, 20);
    B f2(7, 14);
    C f3(7, 20);

    float avg1 = average(f1);
    float avg2 = average(f2);
    float avg3 = average(f3);
    cout << "Average : " << avg1 << endl;
    cout << "Average : " << avg2 << endl;
    cout << "Average : " << avg3 << endl;
    if (avg1 >= avg2 && avg1 >= avg3)
    {
        cout << "Maximum Average : " << avg1 << endl;
        cout << "Class : First Class." << endl;
        f1.display();
    }
    else if (avg2 >= avg1 && avg2 >= avg3)
    {
        cout << "Maximum Average : " << avg2 << endl;
        cout << "Class : Second Class." << endl;
        f2.display();
    }
    else
    {
        cout << "Maximum Average : " << avg3 << endl;
        cout << "Class : Third Class." << endl;
        f3.display();
    }

    return 0;
}