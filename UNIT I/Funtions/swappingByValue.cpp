/*Swapping of two number in function using the call by value

Date : 26/08/2026
Author : Anand Kumar
*/
#include<iostream>
using namespace std;

void swappingNumber(int number1, int number2){
   number1 = number1 + number2;
   number2 = number1 - number2;
   number1 = number1 - number2;

   cout<<"Swapped Number are : "<<number1<<" "<<number2<<endl;
}


void display(int number){//Number is a Formal Parameter
    cout<<"Number is : "<<number<<endl;
}


//Call by Value
void increment(int num){
   num++;
   cout<<"Variable inside the function : "<<num<<endl;
}


int main(){
 int num = 10;
 swappingNumber(5,3);
 display(num);//num is an actual Parameter
 increment(num);
 cout<<"Variable is outside of function : "<<num;
 return 0;
}