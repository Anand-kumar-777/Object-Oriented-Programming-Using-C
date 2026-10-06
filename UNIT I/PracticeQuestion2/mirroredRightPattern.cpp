/*Documentation
Write a C++ program using nested loops to print a mirrored right-angled triangle star pattern.

Date : 13/08/2026
Author : Anand Kumar
*/
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the no of rows : ";
    cin>>number;

    for(int i = 1; i<=number; i++){
        //Ineer loop to print the space
        for(int k = 1; k<=number -i; k++){
            cout<<" ";
        }
       
        //Inner loop to print the star pattern
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}