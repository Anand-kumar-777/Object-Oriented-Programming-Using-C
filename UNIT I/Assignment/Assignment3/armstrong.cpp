#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    int temp = number;
    int sum = 0;


    while(temp != 0){
        int lastDigit = temp % 10;
        sum += lastDigit * lastDigit * lastDigit; // Since we are only considering 3-digit numbers, we can directly cube the last digit
        temp /= 10;
    }


    if(sum == number){
        cout<<number<<" is an Armstrong number."<<endl;
    } else {
        cout<<number<<" is not an Armstrong number."<<endl;
    }

    return 0;
}