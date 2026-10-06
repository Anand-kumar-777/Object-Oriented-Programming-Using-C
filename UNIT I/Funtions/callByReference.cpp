/*
In call by reference, the function receives a reference to the original
variable instead of a copy. As both parameters refer to the same memory location, changes made inside the function directly modify the original variable.

Avoids copying large objects, improving performance.
Allows the function to modify the original variable.
Commonly used for large objects or output parameters.

Date : 26/08/2026
Author : Anand Kumar

*/
#include<iostream>
using namespace std;

void increment(int &num){
    num++;
    cout<<"Variable inside function : "<<num<<endl;
};

int main(){
    int num = 5;
    increment(num);
    cout<<"Variable outside function : "<<num<<endl;
    return 0;
}