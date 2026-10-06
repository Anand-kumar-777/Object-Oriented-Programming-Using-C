/*Documentation
Write a C++ program to check whether a number is a Neon number.
9 = 9^2 = 81;
8+1 = 9
IF(9 == (8+1)) ==It's Neon Number;

Date : 13/08/2026
Author : Anand Kumar
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int numOfPow;
    cout<<"Enter the Power for your number : ";
    cin>>numOfPow;
    int sum = 0;
   

    if(number<0){
        cout<<"Number should be positive : "<<number;
    }

    int square = pow(number, numOfPow);
    int temp = square;


    if(temp == 0){
        sum == 0;
    } else{
        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }
    }

    if(sum == number){
        cout<<"Your number "<<number<<" is Neon Number : "<<sum;
    }
    else{
         cout<<"Your number "<<number<<" is not Neon Number : "<<sum;
    }
    
    return 0;

}