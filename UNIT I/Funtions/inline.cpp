/*Inline Function*/

#include<iostream>
using namespace std;

inline int printSum(int num1, int num2){
     return num1 + num2;
};

int main(){
 cout<<"Sum of Two Number : "<<printSum(15, 21);
 return 0;
}