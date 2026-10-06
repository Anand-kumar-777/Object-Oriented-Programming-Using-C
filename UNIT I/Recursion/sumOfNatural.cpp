/*Write a program to find the sum of N natural Numbers using the recusion*/
#include<iostream>
using namespace std;

int naturalSum(int number){
    int sum = 0;
    if(number == 0){
        return 0;
    }

    sum =  number + naturalSum(number - 1);
    return sum;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"Sum of N natural Number : "<<naturalSum(number);
}