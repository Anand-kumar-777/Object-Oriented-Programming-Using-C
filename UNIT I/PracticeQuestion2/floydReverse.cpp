/*
Write a C++ program using nested loops to print Floyd’s reverse triangle of N rows.


Date : 07/08/2026
Author : Anand Kumar
*/


#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the rows of triangle : ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        //inner loop to print the stars
        for(int j= 1; j<=(rows -i)+1; j++){
            cout<<"*";
        }
        
        //Inner loop to print the space
        for(int k = 1; k<=i; k++ ){
            cout<<" ";
        }
        cout<<endl;
    }
}