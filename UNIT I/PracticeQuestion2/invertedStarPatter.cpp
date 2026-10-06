/*
Write a C++ program using nested loops to print an inverted right-angled triangle star pattern.


Date : 06-08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int numberOfRows;
    cout<<"Enter the number of rows : ";
    cin>>numberOfRows;

    for(int i=numberOfRows; i>=1; i--){ 
        for(int j=1; j<=i; j++){ //printing the stars
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}