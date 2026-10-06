/*Write a C++ program to convert the Binary NUmber into Decimal*/

#include<iostream>
using namespace std;

int binToDeci(int number){
    if(number == 0){
        return 0;
    }

    int lastDigit = number % 10;
    return lastDigit + 2 * binToDeci(number / 10);

}

int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;

    cout<<"Binary to Decimal : "<<binToDeci(number);
    return 0;
}
