/*Write a C++ program to print the power of number using the recusion*/
#include<iostream>
using namespace std;

int numPow(int number, int pow){//Formal Parameter
 if(pow == 0){
    return 1;
 }

 return number * numPow(number, pow-1);

}
int main(){
    int number, pow;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"Enter the Power for your Number : ";
    cin>>pow;
    cout<<"Power of Number : "<<numPow(number, pow);//Actual Parameter
}