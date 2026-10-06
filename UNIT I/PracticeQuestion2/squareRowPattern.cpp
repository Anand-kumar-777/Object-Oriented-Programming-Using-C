/*Documentation
Write a C++ program using nested loops to print a square pattern where each row starts with the row number.

Date : 13/08/2026
Author : Anand Kumar

Ouput : 
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 
*/

#include<iostream>
using namespace std;

int main(){
    int rowNumber;
    cout<<"Enter the no of rows in your pattern : ";
    cin>>rowNumber;

    for(int i= 1; i<=rowNumber; i++){
        for(int j = 1; j<=rowNumber; j++){
            cout<<(i + j -1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}