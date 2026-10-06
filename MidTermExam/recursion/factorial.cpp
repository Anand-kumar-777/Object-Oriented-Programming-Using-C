//Find Factorial

#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1){
        return n;
    }

    return n * factorial(n-1);
}
int main(){
    int number;
    cout<<"Enter the Number of Factorial : ";
    cin>>number;

    cout<<"Factorial is : "<<factorial(number);

    return 0;
}