/*Date : 28/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

void increment(int *ptr){
   //Inside function
   cout<<"Value inside function before increment : "<<*ptr<<endl;
   (*ptr)++;
   cout<<"Value inside function after increment : "<<*ptr<<endl;
};

int main(){
    int number = 10;
    int *ptr = &number;
    
    cout<<"Outside funtion : "<<number<<endl;
    increment(ptr);
    number++;
    cout<<"Outside funtion after increment : "<<*ptr<<endl;

    return 0;
}