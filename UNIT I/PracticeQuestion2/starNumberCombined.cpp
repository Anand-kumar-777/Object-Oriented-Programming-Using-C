/*Documentation
Write a C++ program using nested loops to print a pattern of stars and numbers combined.

Date : 13/08/2026
Author : Anand Kumar
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the no of rows : ";
    cin>>number;

    for(int i = 1;i<=number; i++){
        for(int j = 1; j<=i; j++){
            if(j % 2 == 0){
                cout<<"*"<<" ";
            } else{
                cout<<"1"<<" ";
            }
        } 
        cout<<endl;
    }

    cout<<"=======Second Pattern in Square Shape========="<<endl;
    for(int i = 1;i<=number; i++){
        for(int j = 1; j<=number; j++){
            if(j % 2 == 0){
                cout<<"*"<<" ";
            } else{
                cout<<"1"<<" ";
            }
        } 
        cout<<endl;
    }
    return 0;
}