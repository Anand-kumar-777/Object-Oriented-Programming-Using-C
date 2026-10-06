/*Documentation
Write a C++ program to calculate the sum of the series 1² + 2² + 3² + … + N².

Date : 13/08/2026
Author : Anand Kumar
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number : "<<endl;
    cin>>number;
    int numOfPow;
    cout<<"Enter the power of your number series : "<<endl;
    cin>>numOfPow;
    int sum = 0;

    for(int i = 1; i<=number; i++){
       sum += pow(i, numOfPow);
    }
    cout<<"The total Sum of your number series : "<<sum;
    return 0;
}