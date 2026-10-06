/*
Documentation
Write a C++ program using nested loops to print a hollow right-angled triangle star pattern.

Date : 10/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number of rows : ";
    cin>>number;
    
    for(int i = 1; i<= number; i++){
        for(int j = 1; j<=number - i; j++){
            cout<<" ";
        }
        for(int k = 1; k<=i; k++){
            if(k == i || k == 1 || i== number ){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}