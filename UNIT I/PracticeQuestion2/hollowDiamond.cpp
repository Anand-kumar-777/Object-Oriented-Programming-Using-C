/*
Documentation
Write a C++ program using nested loops to print a hollow diamond star pattern.

Date : 09/08/2026
Author : Anand Kumar*/


#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number of Rows : ";
    cin>>number;

    //Printing the Upper half of the Diamond Star
    for(int i = 1; i<=number; i++){
        //First inner loop to print the space before the star
        for(int j = 1; j<=number-i; j++){
            cout<<" ";
        }

        //Second inner loop to print the Star after the Space
        for(int k = 1; k<=(2 * i - 1); k++){
            if(k == 1 || k == (2* i -1)){
                 cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


    //Printing the Lower Half of the Pattern
    for(int i = number; i>=1; i--){

        for(int j = 1; j<=number-i; j++){
            cout<<" ";
        }
        
        //Second inner loop to print the Star after the Space
        for(int k = 1; k<=(2 * i - 1); k++){
            if(k == 1 || k == (2* i -1)){
                 cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}