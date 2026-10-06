/*Documentation
Write a C++ program using nested loops to print alternating 0s and 1s pattern.

Date : 13/08/2026
Author : Anand Kumar
*/
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>>number;

    for(int i= 1; i<=number; i++){
       for(int j = 0; j<number; j++){
         if((i + j)% 2 == 0){
            cout<<"0"<<" ";
         }else{
            cout<<"1"<<" ";
         }
       }
       cout<<endl;
    }
}

