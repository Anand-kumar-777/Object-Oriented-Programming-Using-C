/*
Write a C++ program using nested loops to print an alphabet right-angled triangle pattern.

Date : 09/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the no Alphabet in Row : ";
    cin>>number;
    for(int i = 1; i<=number; i++){
        char ch = 'A';
        for(int j = 1; j<=i; j++, ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}