/*write a c++ program to find the sum of digit of a number using the rcursion*/
#include<iostream>
using namespace std;

int sumDigit(int number){
    int sum = 0;
    if(number == 0){
        return 0;
    }
  
  sum = (number % 10) + sumDigit(number/10);
  return sum;

}

int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;

    cout<<"Sum of Digits : "<<sumDigit(number);
    return 0;

}