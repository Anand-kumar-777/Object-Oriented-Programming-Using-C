/*
Write a C++ program using nested loops to print a hollow square star pattern.

Date : 09/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the no of Rows of Stars : ";
    cin>>rows;

    for(int i = 1; i<=rows; i++){  //Outer loop
        for(int j = 1; j<=rows; j++){
            if(i == 1 || i == rows || j == 1 || j == rows){
                cout<< "* ";
            } else{
                cout<< "  ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}