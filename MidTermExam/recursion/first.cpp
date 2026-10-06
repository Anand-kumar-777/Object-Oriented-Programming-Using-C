// Fibonacci Series

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int number;
    cout << "Enter the number of term : ";
    cin >> number;
    
    cout<<"Fibonacci series : ";
    for(int i = 0; i<number; i++){
       cout<<fibonacci(i)<<" ";
    }

    return 0;
}